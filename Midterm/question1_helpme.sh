#!/bin/bash
echo "enter name of command (cat, ls, chmod, date, echo, man)"
read name
if [[ $name == "cat" ]]; then
  sed -n '1,49 p' mandatabase.txt

elif [[ $name == "ls" ]]; then
  sed -n '50,100 p' mandatabase.txt

elif [[ $name == "chmod" ]]; then
  sed -n '100,149 p' mandatabase.txt

elif [[ $name == "date" ]]; then
  sed -n '150,199 p' mandatabase.txt

elif [[ $name == "echo" ]]; then
  sed -n '200,249 p' mandatabase.txt

elif [[ $name == "man" ]]; then
  sed -n '250,299 p' mandatabase.txt

else
  echo "sorry, I cannot help you"
fi

sleep 20
