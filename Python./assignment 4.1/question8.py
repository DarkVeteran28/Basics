num = int(input("Enter a number: "))
sum_div = 0

for i in range(1, num):
    if num % i == 0:
        sum_div += i

if sum_div == num:
    print(num, "is a Perfect number.")
else:
    print(num, "is not a Perfect number.")

