#include <globaldefs.h>
#include "Graphics/Vector.h"

struct Vec3Target0204c608 {
    int x;
    int y;
    int z;
};
void SetVec3At0x0(Vec3Target0204c608* obj, int x, int y, int z);

struct TerrainBox0204c030 {
    Vec3Target0204c608 max;
    Vec3Target0204c608 min;
};

struct TerrainHeader0204c030 {
    int type;
    int shift;
    short originX;
    short originY;
    short originZ;
    char pad0e[0x18 - 0x0e];
    short cellSize;
    unsigned int cols;
    unsigned int rows;
};

struct TerrainPolygon0204c030 {
    union {
        Vector3s verts[4];
        short coords[12];
    };
    unsigned char minX : 4;
    unsigned char minY : 4;
    unsigned char minZ : 4;
    unsigned char maxX : 4;
    unsigned char maxY : 4;
    unsigned char maxZ : 4;
    unsigned char visited : 1;
    unsigned char attribute : 7;

    short MinX() const { return coords[minX]; }
    short MinY() const { return coords[minY]; }
    short MinZ() const { return coords[minZ]; }
    short MaxX() const { return coords[maxX]; }
    short MaxY() const { return coords[maxY]; }
    short MaxZ() const { return coords[maxZ]; }
    void GetMin(Vec3Target0204c608* v) const { SetVec3At0x0(v, MinX(), MinY(), MinZ()); }
    void GetMax(Vec3Target0204c608* v) const { SetVec3At0x0(v, MaxX(), MaxY(), MaxZ()); }
    TerrainBox0204c030 GetBox() const {
        TerrainBox0204c030 box;
        GetMin(&box.min);
        GetMax(&box.max);
        return box;
    }
};

struct TerrainMesh0204c030 {
    TerrainHeader0204c030* header;
    TerrainPolygon0204c030* polygons;
    unsigned char* cellCounts;
    unsigned short* cellStarts;
    unsigned short* polygonIndices;
    int field14;
    TerrainBox0204c030 bounds;
    Vector3i origin;
    Vector3i field3c;
    unsigned int cellCount;
};

struct TerrainGrid0204c030 {
    Vector3s polygons[96][4];
    int count;
    int scale;
    Vector3i position;
    Vector3i field914;
    unsigned char attributes[96];
};

extern "C" bool func_0203109c(const TerrainBox0204c030* a, const TerrainBox0204c030* b);

// USA: func_0204c030
extern "C" ARM int func_0204c030(TerrainMesh0204c030* mesh, TerrainGrid0204c030* grid, TerrainBox0204c030 probe) {
    static int sLastTotal;
    TerrainPolygon0204c030* visited[192];
    Vector3fix_Subtract((Vector3i*)&probe.min, &mesh->origin, (Vector3i*)&probe.min);
    Vector3fix_Subtract((Vector3i*)&probe.max, &mesh->origin, (Vector3i*)&probe.max);
    if (!func_0203109c(&probe, &mesh->bounds)) return 0;
    probe.min.x >>= mesh->header->shift;
    probe.min.y >>= mesh->header->shift;
    probe.min.z >>= mesh->header->shift;
    probe.max.x >>= mesh->header->shift;
    probe.max.y >>= mesh->header->shift;
    probe.max.z >>= mesh->header->shift;
    int cells[7] = {0, 1, 2, 3, 4, 5, 6};
    int n = 0;
    int centerX = (probe.max.x + probe.min.x) / 2;
    int centerZ = (probe.max.z + probe.min.z) / 2;
    if (mesh->cellCount <= 7) {
        n = mesh->cellCount;
    } else {
        int row = (int)((float)fix32_Divide(centerZ - mesh->header->originZ, mesh->header->cellSize) / 4096.0f);
        if (row >= 0 && row < mesh->header->rows) {
            bool found = false;
            if (row % 2 == 0) {
                int col = (int)((float)fix32_Divide(centerX - mesh->header->originX, mesh->header->cellSize) / 4096.0f);
                if (col >= 0 && col < mesh->header->cols) found = true;
                if (found) {
                    int index = row * mesh->header->cols + col + row / 2;
                    unsigned int cols = mesh->header->cols;
                    cells[n++] = index;
                    if (row > 0) {
                        cells[n++] = index - mesh->header->cols;
                        cells[n++] = index - mesh->header->cols - 1;
                    }
                    if (row < mesh->header->rows - 1) {
                        cells[n++] = index + mesh->header->cols;
                        cells[n++] = index + mesh->header->cols + 1;
                    }
                    if (col > 0) cells[n++] = index - 1;
                    if (col < cols - 1) cells[n++] = index + 1;
                }
            } else {
                int col = (int)((float)fix32_Divide(centerX - mesh->header->originX + mesh->header->cellSize / 2, mesh->header->cellSize) / 4096.0f);
                if (col >= 0 && col < mesh->header->cols + 1) found = true;
                if (found) {
                    int index = row * mesh->header->cols + col + row / 2;
                    unsigned int cols = mesh->header->cols;
                    cells[n++] = index;
                    if (row > 0) {
                        if (col > 0) cells[n++] = index - cols - 1;
                        if (col < cols) cells[n++] = index - cols;
                    }
                    if (row < mesh->header->rows - 1) {
                        if (col > 0) cells[n++] = index + cols;
                        if (col < cols) cells[n++] = index + cols + 1;
                    }
                    if (col > 0) cells[n++] = index - 1;
                    if (col < cols) cells[n++] = index + 1;
                }
            }
        }
    }
    int visitedCount = 0;
    int total = 0;
    for (int i = 0; i < n; i++) {
        int cell = cells[i];
        int count = mesh->cellCounts[cell];
        int start = mesh->cellStarts[cell];
        for (int j = 0; j < count; j++) {
            TerrainPolygon0204c030* polygon = &mesh->polygons[mesh->polygonIndices[start + j]];
            if (!polygon->visited) {
                polygon->visited = 1;
                visited[visitedCount++] = polygon;
                if (visitedCount == 192) break;
                TerrainBox0204c030 box = polygon->GetBox();
                if (func_0203109c(&box, &probe)) {
                    Vector3fix16Copy(&grid->polygons[total][0], &polygon->verts[0]);
                    Vector3fix16Copy(&grid->polygons[total][1], &polygon->verts[1]);
                    Vector3fix16Copy(&grid->polygons[total][2], &polygon->verts[2]);
                    Vector3fix16Copy(&grid->polygons[total][3], &polygon->verts[3]);
                    if (mesh->header->type == 3) grid->attributes[total] = polygon->attribute;
                    total++;
                    grid->count = total;
                    if (total == 96) break;
                }
            }
        }
        if (total == 96) break;
    }
    for (int k = 0; k < visitedCount; k++) visited[k]->visited = 0;
    if (sLastTotal != total) sLastTotal = total;
    grid->scale = 1 << mesh->header->shift;
    grid->position = mesh->origin;
    grid->field914 = mesh->field3c;
    return total;
}
