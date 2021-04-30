#!/bin/bash
echo "Enter key word"
read keyword
grep -i -c $keyword wikifile.txt
sleep 20
