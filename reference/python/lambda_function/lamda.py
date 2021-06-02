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
    """
    
#map function access the each element of sequances 
#  map(function,sequence)

