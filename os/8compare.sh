#!/bin/bash

echo -e "apple\nbanana\ncherry\norange" > file1.txt
echo -e "banana\ncherry\nlemon\nwatermelon" > file2.txt

echo

sort file1.txt -o file1.txt
sort file2.txt -o file2.txt

echo "Common entries between file1.txt and file2.txt"
comm -12 file1.txt file2.txt

echo

echo "Unique entries between file1.txt and file2.txt"
comm -23 file1.txt file2.txt

echo

echo "Unique entires between file1.txt and file2.txt"
comm -13 file1.txt file2.txt
