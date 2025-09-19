#!/bin/bash

if [ -z $1 ]; then
    echo "No input argument"
    exit 1
fi 

gcc -o output "$1"
if [ $? -ne 0 ]; then
    echo "Compilation failed!"
    exit 1
fi

./output