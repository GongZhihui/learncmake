#pragma once

#ifdef HELLO_EXPORT
#define HELLO_API _declspec(dllexport)    // 导出函数 - 生成dll文件时使用
#else
#define HELLO_API _declspec(dllimport)    // 导入函数 -使用dll是使用
#endif // HELLO_API