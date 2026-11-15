if g++ -Wall -Wextra -Werror -std=c++20 midterm.cpp main.cpp -o midterm 2> /dev/null;
then ./inputs > output.txt
else
echo "BUILD FAILED"
fi
