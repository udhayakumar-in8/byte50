#! /usr/bin/env python
"""
def square(x):
    return x*x
print("main Thread!")
print(square(2))

#using lambda function to return sqaure value 
f =  lambda x : x * x
res = f(5)
print("sqauare value is ", res)
# using lambda function to  find the biggest number
max = lambda x ,y : x if x > y else y
a, b = [int(n) for n in input("Enter the Number").split(',')]
print("The Biggest  number is :", max(a,b))

# lambda function with filter
def is_even(x) :
    if x % 2 == 0 :
        return True
    else :
        return False
    
print("lamda with filter function")
lst = [12, 13, 15, 16, 17, 34, 89]
lst = list(filter(is_even,lst))
print("the list is ",lst)
# optimize the above code
lst = [1, 4, 6, 3, 7, 9, 34] 
lst = list(filter(lambda x: (x %2 == 0), lst))
print(lst) 
#map function access the each element of sequances 

#map(function,sequence)
def sqre(x):
    return x * x
lst = [3, 5, 7, 2, 34,64]
print("map function")
lis = list(map(sqre,lst))
print(lis)

#map optimized way
lst = [3, 6, 2, 3, 1, 67]
print(lst)
lst = list(map((lambda x : x + 2),lst))
print(lst)

#reduce functions in c
from functools import *
lst = [1, 4, 6, 9, 3]
res = reduce(lambda x, y: x*y , lst)
print(res)
"""
#decortoes function
""" it like call back function in c"""
def decor(fun) :
    def inner() :
      value = fun()
      return value+2
    return inner
print("main thread")
@decor
def number() :
    return 42
#call the number function
print("final result is", number())



