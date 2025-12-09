num = int(input("Enter a number: "))
total = 0
temp = num

while temp > 0:
    total += temp % 10
    temp //= 10

print("Sum of digits:", total)

