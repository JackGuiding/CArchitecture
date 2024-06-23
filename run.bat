
gcc src\main.c -c -o build\main.o
gcc src\Factory.c -c -o build\Factory.o
gcc src\Context.c -c -o build\Context.o
gcc src\Repo_Role.c -c -o build\Repo_Role.o
gcc src\B_Game.c -c -o build\B_Game.o
gcc src\Do_Role.c -c -o build\Do_Role.o

gcc build\main.o build\Factory.o build\Context.o build\Repo_Role.o build\B_Game.o build\Do_Role.o lib\raylib.dll -o bin\main.exe

copy lib\raylib.dll bin\raylib.dll

bin\main.exe