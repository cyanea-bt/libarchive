#ifndef VERSIONRC_H
#define VERSIONRC_H

/*
 * ref: https://stackoverflow.com/a/5256500
 *
 * Turn A into a string literal without expanding macro definitions
 * (however, if invoked from a macro, macro arguments are expanded).
 */
#define STRINGIZE_NX(A) #A

/*
 * Turn A into a string literal after macro-expanding it.
 */
#define STRINGIZE(A) STRINGIZE_NX(A)

#ifdef _WIN64
#define VER_FILEDESCRIPTION_STR     "Multi-format archive and compression library (64-bit)"
#define VER_ORIGINALFILENAME_STR    "libarchive.dll"
#else
#define VER_FILEDESCRIPTION_STR     "Multi-format archive and compression library (32-bit)"
#define VER_ORIGINALFILENAME_STR    "libarchive_x86.dll"
#endif	// _WIN64

#define VER_COMPANYNAME_STR         "https://github.com/libarchive/libarchive"
#define VER_INTERNALNAME_STR        "archive"
#define VER_PRODUCTNAME_STR         "libarchive"
#define VER_COMMENTS_STR            "Static build using MSVC " STRINGIZE(_MSC_VER) "/CMake " STRINGIZE(_CMAKE_VER) "/vcpkg"

#define VER_FILEVERSION             3,7,4,0
#define VER_FILEVERSION_STR         "3.7.4\0"

#define VER_PRODUCTVERSION          3,7,4,0
#define VER_PRODUCTVERSION_STR      "3.7.4\0"

#endif	// VERSIONRC_H
