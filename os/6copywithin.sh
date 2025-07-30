read -p "Enter the source file name: " source
read -p "Enter the new file name: " new

if [ -f $source ]; then
	cp "$source" "$new"
	echo "File copied $new"
else
	echo "File not found"
fi
