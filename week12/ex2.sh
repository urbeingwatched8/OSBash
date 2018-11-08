gcc ex2.c -o ex2
echo "test w/out -a" | ./ex2 "ex2.txt"
echo "test with -a" | ./ex2 -a "ex2.txt"
