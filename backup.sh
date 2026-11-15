mkdir backup
grep ".cpp" ".h" ~/midterm | cp backup | grep -c ".cpp" ".h" backup
