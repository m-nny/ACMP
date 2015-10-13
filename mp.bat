@echo off
set /P i=
md %i%
if errorlevel 1 goto error
robocopy C:\tem\ %i%
goto end
:error
echo.
echo данная папка уже существует
:end
pause