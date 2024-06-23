
gcc src\main.c -c -o build\main.o
gcc src\Factory.c -c -o build\Factory.o

gcc build\main.o build\Factory.o lib\raylib.dll -o bin\main.exe

copy lib\raylib.dll bin\raylib.dll

bin\main.exe