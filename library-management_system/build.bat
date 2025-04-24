@echo off
g++ main.cpp Book.cpp LibraryManager.cpp -o library.exe
if %errorlevel% neq 0 (
	echo Compile failed.
	pause
	exit /b
)
echo Compile success!
library.exe
pause