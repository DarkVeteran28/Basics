str1 = input()
first = str1[0]
str1 = str1.replace(first, '$')
str1 = first + str1[1:]
print(str1)