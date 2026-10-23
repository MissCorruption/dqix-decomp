#pragma once

#ifdef __cplusplus
extern "C" {
#endif

unsigned int strlen(const char* arg0);
char* strcpy(char* arg0, const char* arg1);
char* strncpy(char* arg0, const char* arg1, unsigned int arg2);
int strcmp(const char* arg0, const char* arg1);
int strncmp(const char* arg0, const char* arg1, unsigned int arg2);
char* strcat(char* arg0, const char* arg1);
char* strchr(const char* arg0, int arg1);

#ifdef __cplusplus
}
#endif
