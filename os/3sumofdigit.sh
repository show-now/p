read -p "Enter the num: " num

digit=0
sum=0

while (($num > 0)); do
	digit=$((num%10))
	sum=$((sum + digit))
	num=$((num/10))
done


echo "Sum of digit: $sum"
