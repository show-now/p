read -p "Enter the file name: " file

if [ -f "$file" ]; then
	read -p "Enter the destinamtion: " dest

	if [ -d "$dest" ]; then
		cp "$file" "$dest"
		echo "File copied"
	else
		echo "Destination not found"
	fi
else
	echo "File not found"
fi
