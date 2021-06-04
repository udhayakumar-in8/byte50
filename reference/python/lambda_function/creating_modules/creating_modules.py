#! /usr/bin/env python3
def addition (*args):
    sum = 0
    for i in args :
        sum += i
    return sum
def multiplication (*args):
    sum = 0
    for i in args :
        sum *= i
    return sum
def division(*args):
    sum = 0
    for i in args :
        sum /= i
    return sum
def subtraction (*args):
    sum = 0
    for i in args :
        sum -= i
    return sum

#main function calling here
res=addition(12,34,56)
print(res)
res=subtraction(12,34,56)
print(res)
res=multiplication(12,34,56)
print(res)
res=division(12,34,56)
print(res)