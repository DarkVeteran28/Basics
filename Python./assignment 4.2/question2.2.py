s=input("Enter the word: ")
first=s[0]
rest=s[1:].replace(first,'$')
print(first+rest)