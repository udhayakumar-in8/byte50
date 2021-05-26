#! /usr/bin/env python3
string = input("Enter the string: ")
i = c = 0
flag = "true"
for char in string :
    if flag == "flase" and string[i] == ' ' :
      c += 1
    if string[i] == ' ':
        flag = "true"
    else :
        flag = "flase"
    i += 1
print("Number of Words in line ", c+1)

