#pragma warning (disable:4127 4239 4100 4251 4201 4756)

typedef signed   char int8;
typedef unsigned char uint8;
typedef signed   short int16;
typedef unsigned short uint16;
typedef signed   int int32;
typedef unsigned int uint32;
typedef char bchar8;
typedef wchar_t bchar16;
typedef int8 bchar_utf8;
#ifdef UNICODE
typedef  bchar16 bchar;
#elif UTF_8
#error "Windoss Не поддерживает UTF8"
#else
typedef  bchar8 bchar;
#endif
typedef signed   __int64 int64;
typedef unsigned __int64 uint64;

#ifdef X32
typedef uint32 bptr;
#else
typedef uint64 bptr;
#endif
#ifdef X32
typedef uint32 bsize;
#else
typedef uint64 bsize;
#endif
#ifdef X32
typedef int32 bint;
#else
typedef int64 bint;
#endif

#ifdef UNICODE
#define BEAR_PRINT_ANSI "%S"
#define BEAR_PRINT_UNICODE "%s"
#define BEAR_PRINT_CURRENT "%s"
#else
#define BEAR_PRINT_ANSI "%s"
#define BEAR_PRINT_UNICODE "%S"
#define BEAR_PRINT_CURRENT "%s"
#endif

#include <Windows.h>

#define BEARPROJECT_EXPORT __declspec(dllexport)
#define BEARPROJECT_IMPORT __declspec(dllimport)