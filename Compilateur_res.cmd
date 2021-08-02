@echo off
erase Mobius.res
windres Mobius.rc -O coff -o Mobius.res
pause
