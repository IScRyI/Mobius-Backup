@echo off
@chcp 1252>nul
@erase build\Mobius_old.exe>nul
cd build
@ren Mobius.exe Mobius_old.exe>nul
cd %userprofile%\Documents\MEGAsync\Shmup\Script Divers\Lecteur de Musique
gcc -Wall -std=c11 src\*.c -I"include" -I"C:\libsdl\include" -L"C:\libsdl\lib" -lmingw32 -lSDL2main -lSDL2 -lSDL2_image -lSDL2_net -lSDL2_mixer -lSDL2_ttf Mobius.res -o build\Mobius.exe
@chcp 65001>nul
pause
cls
@build\Mobius.exe
pause
cd %userprofile%\Documents\MEGAsync\Shmup\Script Divers\Lecteur de Musique
cls