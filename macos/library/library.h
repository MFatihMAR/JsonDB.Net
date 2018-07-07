#ifndef LIBRARY_H
#define LIBRARY_H

#define kBUNDLE_ID "com.mfatihmar.divert"
#define kBUNDLE_MD5 "DBA0BB4EA08DD00AD771E99E807B2A86"

int library_directory_exists(const char* path);
int library_chown_directory(const char* path, const char* user, const char* group);

#endif // LIBRARY_H
