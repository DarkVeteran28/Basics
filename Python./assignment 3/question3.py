a=int(input("Enter the first number: "))
b=int(input("Enter the Second number: "))
c=int(input("Enter the Third number: "))
if(a>b and b<c):
    print(a,">",c,">",b)
elif(a>b and c<b):
    print(a,">",b,">",c)
elif(b>c and c<a):
    print(b,">",a,">",c)
elif(b>c and a<c):
    print(b,">",c,">",a)
elif(c>a and a<b):
    print(c,">",b,">",a)
else:
    print(c,">",a,">",b)

