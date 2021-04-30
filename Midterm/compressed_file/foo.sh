#!/bin/bash

#foo.sh in Part A of Lab 6 - Part 1
#

x=0
i=1
echo please input a number
read num
while [ $i -le $num ]
do
s=$(($i * $i))
x=$(($s + $x))
i=$(($i + 1))
done

echo x=$x
