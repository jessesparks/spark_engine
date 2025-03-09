#!/bin/bash

mkdir -p tmp/linux/test_game

cmake -S spark_engine -B tmp/linux
make -C tmp/linux
cp tmp/linux/libspark_engine.a bin/linux/libspark_engine.a
cmake -S . -B tmp/linux/test_game
make -C tmp/linux/test_game
mv tmp/linux/test_game/TestGame bin/linux/TestGame
