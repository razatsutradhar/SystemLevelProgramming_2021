#!/bin/bash
echo "enter N"
read number

for files in $(find ~ -atime +$number -type f)
do
    echo $files
    zip {$files".zip"} $files
done
