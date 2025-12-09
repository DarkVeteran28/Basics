num = int(input("Enter a number: "))
order = len(str(num))
sum_cubes = 0
temp = num

while temp > 0:
    digit = temp % 10
    sum_cubes += digit ** order
    temp //= 10

if num == sum_cubes:
    print(num, "is an Armstrong number.")
else:
    print(num, "is not an Armstrong number.")
