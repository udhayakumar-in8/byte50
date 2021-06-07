#! /usr/bin/env python3
import numpy as np
print("The  Employee Details ")
emp=[ ]

#entering employee details
while True :
  print("Enter following the details")
  idn = (int)(input("Enter the id  properly: "))
  emp.append(idn)
  name = input("Enter the name properly: ")
  emp.append(name)
  salery = (float)(input("Enter the saler properly: "))
  emp.append(float)
  print("APPENDING DATA IS id :{} Name : {} Salery: {}".format(idn, name, salery))
  
  #in this loop control from this if condition
  if (('yes' or 'y') or 'Y') == input("Do you want add more details 'press' Y / yes / y :") :
      continue
  else :
      print("input Details saved!")
      break
print("="*15)
eid = (int) (input("Enter the id you can print details:"))
assert eid > 0, "invaild input"
count = 0
for i in range(len(emp)):
    if emp[i] == eid :
        count = 0
        print('Id= {}, Name= {}, Salery= {}'
                                        .format(emp[i],emp[i+1],np.emp[i+2]))
        break
    else :
        count += 1
if count != 0 :
    print ("Id Not found")
print("OOPS! Program Exited!")