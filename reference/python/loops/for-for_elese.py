#! /usr/bin/env python3
"""
lists = [1,2,3,4,5,6,9]
for i in lists :
    print(i)
else :
   print("nothing having the content in list")
"""
def sum(a) :
  return a + 10
x = 1
while x :
    print(x,end = ' ')
    if x == 100 :
        # break  '''break the loop '''
       #pass   '''nothing operation performed '''
        print("Result is", sum(x))  
        break
    x += 1
else :
 print("while completed")
    
