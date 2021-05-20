#! /usr/bin/env python3
from array import *
# array in multi diamonsonal Array
""" 
marks = array( [[56, 34, 22, 21],[55, 23, 24, 67],[78, 45, 22, 12]] )
print(marks)

#arrya using numpy
from numpy import *
arr= array(["ahamatha", "matrix", "nomatics", "valamatrix", "notation"], str)
print(arr)
"""
# creating a array using linespace
from numpy import linspace,logspace,arange,zeros,ones
""" linspace funciton (start, stop, spliting ) in this function 
  start-starting rang, end-ending range - the number 
  spliting how many number of blocks you want  """
a = linspace(0, 212, 5)
print(a)

b = logspace(1, 50, 10)
print(b)

c = arange(0, 20, 2)
print(c)

# initalize the '0' and '1' in arrays
n = 10
a = zeros(n,int)
print(a)
n -=1
a = ones(n,int)
print(a)
