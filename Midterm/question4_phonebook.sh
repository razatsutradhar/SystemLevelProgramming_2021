#!/bin/bash
echo "welcome to the phone book, press enter to see all names"
read input
awk -F, '{OFS=","; print $1 "\t\t" $2}' phone.csv #print all namess

echo "press enter to see these names odered by first name"
read input2
awk -F, '{OFS=","; print $2 "\t\t" $1}' phone.csv | sort  #print all names ordered by last name

echo "press enter to see only the frist 10 names and adresses"
read input3
awk -F, ' NR==2, NR==11{OFS=","; print $1 "\t\t" $2 "\t\t" $3} ' phone.csv | sort #print first 10 names ordered by first name

echo "press enter to see all entries where people live in circles"
read input4
grep -i "circle" phone.csv | awk -F, '{OFS=","; print $1 "\t\t" $2 "\t\t" $3}' # names of people who live in addreses with the word circle in it

echo "press enter to delete the 3rd line"
read input5
sed '3d' phone.csv #delte 3rd line

echo "press enter to move lines 2-5 down to the end of the page"
read input4
sed -e '2,6{H;d;}' -e '${p;x;s/^\n//;}' phone.csv #take lines 2-5 to the end of the files

echo "press enter to change all Drives to Dr."
read input4
sed -i 's/Drive/Dr/g' phone.csv #replace all instance of Drive to Dr.
sleep 20
