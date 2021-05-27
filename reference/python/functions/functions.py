#! /usr/bin/env python3
"""
return statement you can return 
                  multiple value from the function
                  use 'return rvalue1 rvalur2' 
"""
#defining a function and returning multiple values
def function(x, y) :
     print("Function Arguments Received")
     res = x + y
     res1 = x - y
     return res, res1


x = int (input("Enter the first number"))
y = int (input("Enter the first number"))
add,sub = function(x, y)
print("Addition    :", add)
print("Subtraction :", sub)