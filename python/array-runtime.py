#! /usr/bin/env python3
"""
str = input("Enter the number").split(' ')
marks = [int(num) for num in str ]
print(marks)
i = 0
while (i) :
  print(marks[i])
  i +=1
"""
import array as ar
x = ar.array('i', [])
#array input
n = int (input("Enter the How many Limit"))

for i in range(n):
    x.append(int(input()))
print("orgina Array:", x)

for i in range(n-1) :
  for j in range (n-1-i) :
      if x[j] > x[j+1] :
        temp = x[j]
        x[j] = x[j+1]
        x[j+1] = temp

print(x)
for ele in x :
    print(ele ,end = " ")
print("\n")





