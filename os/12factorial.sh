read -p "Enter the number: " num

fact=1

if (($num < 0)); then
	echo "Factorial isn't defined for negative numbers"
else
	for ((i = 1; i <= num; i++)); do
		fact=$((fact*i))
	done
	echo "Factorial of $num is: $fact"
fi
