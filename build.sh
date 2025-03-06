#!/bin/bash

cmake -S . -B tmp/linux
make -C tmp/linux
mv tmp/linux/libsparkengine.a bin/linux/libsparkengine.a
