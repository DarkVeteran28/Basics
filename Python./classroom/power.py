import math
def power(a,b):
    if b==0:
        return 1
    else:
        return a*power(a,b-1)
print(power(2,3))