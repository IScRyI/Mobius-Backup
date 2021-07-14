@echo off
erase Mobius.ico
windres Mobius.rc -O coff -o Mobius.res
pause
