#!/bin/bash
#输入参数为 章节 本章练习题数量
echo "mkdir $1 $2"
mkdir $1/$1.$2
mkdir $1/$1.$2/build
touch $1/$1.$2/main.cpp
touch $1/$1.$2/CMakeLists.txt