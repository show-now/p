#!/bin/bash
read -p "Enter the text: " txt

res=$(echo $txt | tr "A-Za-z" "a-zA-Z")
echo "Result: $res"
