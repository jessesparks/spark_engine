DEL bin\windows\TestGame.exe
DEL bin\windows\spark_engine.lib
mkdir bin\windows
mkdir tmp\windows\test_game
git submodule update --init --recursive
cmake -S spark_engine -B tmp/windows -G "MinGW Makefiles"
mingw32-make -C tmp/windows
copy "%~dp0tmp\windows\spark_engine.lib" "%~dp0bin\windows\"
cmake -S . -B tmp/windows/test_game -G "MinGW Makefiles"
mingw32-make -C tmp/windows/test_game
move "%~dp0tmp\windows\test_game\TestGame.exe" "%~dp0bin\windows\"
pause
