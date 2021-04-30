#!/bin/bash

#foo.sh in Part A of Lab 6 - Part 1

x=0
i=1
while [$i -le 3]
do
s='expr $i \* $i'
x='expr $s + $x'
i='expr $i +1'
done

echo x=$x
