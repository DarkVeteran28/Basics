a=float(input("Enter the number: "))
if(a>0):
    if(abs(a)<100):
        print("Small positive")
    else:
        print("Positive")
else:
    if(abs(a)<100):
        print("Small negative")
    else:
        print("Negative")
    

