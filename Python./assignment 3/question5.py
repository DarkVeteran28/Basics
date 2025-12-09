import math
a=int(input("Enter the a coefficient: "))
b=int(input("Enter the b coefficient: "))
c=int(input("Enter the c coefficient: "))
root1= (-b+math.sqrt(math.pow(b,2)-4*a*c))/2*a
root2= (-b-math.sqrt(math.pow(b,2)-4*a*c))/2*a
print(root1,"  ",root2)
