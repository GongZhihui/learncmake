#pragma once

#ifdef HELLO_EXPORT
#define HELLO_API _declspec(dllexport)
#else
#define HELLO_API _declspec(dllimport)
#endif // HELLO_EXPORT