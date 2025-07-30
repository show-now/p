read -p "Enter the word to search: " word
read -p "Enter the filename: " file

if [ -f "$file" ]; then
	echo "Searching for $word in $file..."
	grep -n "$word" "$file"
else
	echo "File doesn't exists"
fi
