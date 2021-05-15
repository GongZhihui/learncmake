mkdir vs2019_build

:: 如果兼容xp，这个命令得执行两遍，若只执行一遍，则平台工具集不会变成v140_xp
:: cmake -G "Visual Studio 16" -B vs2019_build
cmake -G "Visual Studio 16" -A win32 -B vs2019_build

PAUSE