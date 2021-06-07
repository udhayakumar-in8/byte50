#! /usr/bin/env python3
tp = (1, 2, 3, 6, 3, 4)
print(tp)
print(type(tp))

tp2 = 1, 3, 5, 8, 4
print(tp)
print(type(tp))
print(tp[1])
print(tp[-1])

emptp = ((90,"shark",45.4590),(45,"link",12.9),(3,"starlink",8934))
#print(sorted(emptp))
#print(sorted(emptp,reverse = True))
print(sorted(emptp, key=lambda x: x[2]))
