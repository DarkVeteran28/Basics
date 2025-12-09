from math import comb

n = 6  # prints 6 rows (0..5)
for i in range(n):
    # optional spacing for nicer shape:
    print(" " * (n - i - 1), end="")
    for j in range(i + 1):
        print(comb(i, j), end=" ")
    print()

