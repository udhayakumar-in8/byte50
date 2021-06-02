#! /usr/bin/env python3
#local varible & global variable declaration
b = 5
def normal_function(arg1, arg2) :
    b = 1
    print("the varible b ",b)

print("main function\n")
normal_function(2,3)
print(b)