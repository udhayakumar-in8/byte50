#! /usr/bin/env python3
x = [12, 1, 4, 5, 6, 7]
y = [45, 23, 6, 98, 34, 2]
print(x+y)
"""
x.append(11)
print(x)
x.pop()
print(x)
x.insert(3,23)
print(x)
a = range(12)
for i in range(1,12,1) :
 print(a[i])
print("Before Swaping the Arrays")
print("x",x)
print("y",y)
temp =x
x=y
y=temp
print("After Swaping the Arrays")
print("x=",x)
print("y=",y)

n = min(x)
print("min",n)
n1 = max(x)
print("max",n1)
"""
print(x.count(y))
#finding the common elements(intersection)
x= set(x)
y= set(y)
print(x.intersection(y))