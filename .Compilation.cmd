@echo off
erase build\Mobius_old.exe>nul
cd build
ren Mobius.exe Mobius_old.exe>nul
cd ..
gcc -Wall -Wunused-variable -std=c11 src\*.c -I"include" -I"C:\libsdl\include" -L"C:\libsdl\lib" -lmingw32 -lSDL2main -lSDL2 -lSDL2_image -lSDL2_net -lSDL2_mixer -lSDL2_ttf Mobius.res -o build\Mobius.exe
pause
cls
build\Mobius.exe
pause
cls