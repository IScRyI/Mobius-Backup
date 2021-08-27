@echo off
erase Mobius.res>nul
windres Mobius.rc -O coff -o Mobius.res
pause
