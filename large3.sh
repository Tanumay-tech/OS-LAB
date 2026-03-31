echo "Enter num1: "
read num1

echo "Enter num2: "
read num2

echo "Enter num3: "
read num3

echo $num1 $num2 $num3

if [ $num1 -gt $num2 ] && [ $num2 -gt $num3 ]
then
	echo "$num1 is the Greatest"

elif [ $num2 -gt $num1 ] && [ $num2 -gt $num3 ]
then
	echo "$num2 is the Greatest"
elif [ $num3 -gt $num1 ] && [ $num3 -gt $num2 ]
then
	echo "$num3 is the Greatest"
elif [ $num1 -eq $num2 ] && [ $num1 -eq $num3 ]
then
	echo "All the numbers are equal"
else
	echo "Enter valid digits"
fi
