a=input("Enter a alphabet to check whether it is a vowe; or a consonant: ")
vowels="aeiou"
if(len(a)==1 and a.isalpha()):
    a1=a.lower()
    if(a1 in vowels):
        print("Vowel")
    else:
        print("Consonants")  
else:
    print("error")  