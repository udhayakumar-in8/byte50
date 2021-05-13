#! /usr/bin/env python3
"""
for i in range(1 ,11) :
  for j in range(1, i+1):
    print('*', end=' ')
  print()
  
  n = 40
  for k in range(1,11) :
   print(' '*n, end =' ')
   print('* '*(k))
   n -= 1
"""
for k in range(1,11) :
  for l in range(1,11) :
   print('{:8}'.format(k*l), end=' ')
  print()