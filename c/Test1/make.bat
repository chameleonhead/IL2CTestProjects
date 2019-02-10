@echo off
setlocal enabledelayedexpansion
set PATH=%~dp0\..\gcc4\bin;%PATH%
if exist out (
    ren out out.tmp
    rmdir /s /q out.tmp
)
mkdir out
for /r src %%c in (*.c) do (
    rem echo Compile: %%~nc.c
    gcc.exe -I ../lib/include -I include -I src -o out\%%~nc.o -c %%c
    if !errorlevel! neq 0 exit /b
)
if exist main.exe (
    del /q main.exe
)
gcc.exe -o main.exe out\*.o ../lib/libil2c.a
