#! /usr/bin/env python3
def prime(n) :
    " prime number finding "
    flag = 1
    for i in range(2, n) :
        if (n % i == 0) :
           flag = 0
           break
    return flag

print("Prime Number Implement on Python")
n = int (input())
i = 1
while  i < n :
      if( prime(i) ==  0 ) :
         pass
      else :
          print(i)
      i += 1

