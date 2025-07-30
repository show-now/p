read -p "Enter the text: " txt

res=$(echo $txt | tr -cd "AEIOUaeiou" | wc -c)
echo "Number of vowels are: $res"
