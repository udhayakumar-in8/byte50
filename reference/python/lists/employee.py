#! /usr/bin/env python3

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
  #in this loop control from this if condition
  if ("no" or "n" or "N") in input("Do you want add more details press Y|yes|y") :
      continue
  else :
      print("input Details saved!")
      break

print("The  Employee Details")

eid = input("Enter the id you can print details")
count = 0
for i in range(len(emp)):
    if emp[i] == eid :
        count = 0
        print("id is{%d} id of the name is{%s} name of the salery is {%.2f}",
                                               format(emp[i],emp[i+1],emp[i+2]))
        break
    else :
        count += 1
if count != 0 :
    print ("Id Not found")
print("program Completed")
    