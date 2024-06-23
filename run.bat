gcc src\main.c -c -o build\main.o
gcc src\main.c lib\raylib.dll -o build\main.exe

copy lib\raylib.dll bin\raylib.dll

build\main.exe