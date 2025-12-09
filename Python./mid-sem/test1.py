n=int(input("max limit: "))
a=int(input("Arg 1: "))
b=int(input("Arg 2: "))
for i in range(1,n+1):
    if i%a==0 and i%b==0:
            print("FizzBuzz")
    elif i%b==0:
        print("Buzz")
    elif i%a==0:
        print("Fizz")
    else:
        print(i)