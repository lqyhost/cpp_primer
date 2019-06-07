#!/bin/bash
#输入参数为 章节 本章练习题数量
echo "mkdir $1 $2"
mkdir $1
for ((i=1;i<=$2;i++))
do
echo "mkdir $1 $i"
mkdir $1/$1.$i
mkdir $1/$1.$i/build
touch $1/$1.$i/main.cpp
touch $1/$1.$i/CMakeLists.txt
done