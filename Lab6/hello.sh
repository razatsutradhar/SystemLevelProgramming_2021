echo "Welcome to computer science society."
#Name: Razat Sutradhar
#Email: rsutradhar1@student.gsu.edu or razat74@gmail.com
date
echo ls | wc
echo $PATH
echo $USER
echo $SHELL
df 
echo "Please can you loan me \$25.00?"
echo "if x=2,x*x=4,x/2=1"
echo x = 2:
X=2
if [ "$X" == 2 ] 
then 
	echo true
else
	echo false
fi

echo x*x = 4:
mult=$((X * X))
if [ "$mult" == 4 ] 
then 
	echo true
else
	echo false
fi

echo x/2 = 1:
half=$((X/2))
if [[ "$half" -eq 1 ]] 
then 
	echo true
else
	echo false
fi
ls | egrep "^c.*.sh"

 date +"%H"

