echo "Enter your age: "
read age

if [ $age -lt 18 ]
then
	echo "You are $age years old. Not an adult"
elif [ $age -gt 18 ]
then
	echo "You are $age years old. You are an adult"
else
	echo "Enter valid Age"
fi 
