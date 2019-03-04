#This .py file will include 100 challenge of Python 100 challenge
#https://github.com/zhiwehu/Python-programming-exercises/blob/master/100%2B%20Python%20challenging%20programming%20exercises.txt

# Ugurkan Ates started 04.03.2019
'''
Question 1
Level 1

Question:
Write a program which will find all such numbers which are divisible by 7 but are not a multiple of 5,
between 2000 and 3200 (both included).
The numbers obtained should be printed in a comma-separated sequence on a single line.

Hints: 
Consider use range(#begin, #end) method
'''
def question1():
    for i in range (2000,3201,7):
        while (i % 7 != 0) :
            i += 1
        if i % 5 != 0:
            print(i,end=",")
'''

Question 2
Level 1

Question:
Write a program which can compute the factorial of a given numbers.
The results should be printed in a comma-separated sequence on a single line.
Suppose the following input is supplied to the program:
8
Then, the output should be:
40320
'''
def question2(i):
    x = 1
    for y in range(2,i+1):
        x*=y
    print(x)
'''
Question 3
Level 1

Question:
With a given integral number n, write a program to generate a dictionary that contains (i, i*i) such that is an integral number between 1 and n (both included). and then the program should print the dictionary.
Suppose the following input is supplied to the program:
8
Then, the output should be:
{1: 1, 2: 4, 3: 9, 4: 16, 5: 25, 6: 36, 7: 49, 8: 64}
'''
def question3(i):
    diction = dict()
    for x in range(1,i+1):
        diction[x] = x*x
    print(diction)

