read -p "Enter the number: "  num

org_num=$num
rev=0
digit=0

while ((num > 0)); do
	digit=$((num%10))
	rev=$((rev*10 + digit))
	num=$((num/10))
done

if ((rev == org_num)); then
	echo "$org_num is a palindrome"
else
	echo "$org_num is not an palindrome"
fi

