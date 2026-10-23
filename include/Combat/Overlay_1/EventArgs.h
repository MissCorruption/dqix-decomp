#pragma once

// 12-byte value payload passed by-value to the EnqueueEvent / MakeEntry family.
// mwcc marshals it into r1-r3 via a single ldmia, matching the retail idiom.
struct Struct_ov001_02158efc {
    int unknown_0_, unknown_4_, unknown_8_;
};
