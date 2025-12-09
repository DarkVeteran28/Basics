bill=float(input("Enter the bill: "))
festival=float(input("Enter the festival discount percentage(in %): "))

if(bill>5000):
    print("Enter the extra discount(in %): ")
    extra=float(input())
    bill1=bill*festival/100
    bill2=bill*extra/100
    bill=bill-bill1-bill2
    print("Final bill is:",bill)
else:
    bill=bill*festival/100
    print(print("Final bill is:",bill))
