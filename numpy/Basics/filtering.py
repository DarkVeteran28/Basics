import numpy as np

ages= np.array([[21,23,43,23,14,56],
                [39,22,15,99,18,19]])

# Filtering all the data which is not statisfying the condition

#Boolean indexing (Flattens the Structure after operation)
teenagers = ages[ages < 18]
adults = ages[(ages>=18) | (ages<65)]
seniors= ages[ ages>=65 ]
evens= ages[ages%2==0]
odds=ages[ages%2!=0]

# print(teenagers)
# print(adults)
# print(seniors)
# print(evens)
# print(odds)

adults1=np.where(ages>= 18, ages,np._NoValue) #Filters and not matching cases are written 0
print(adults1)

# Use Where clause if you need to preserve the original 
# shape of the data

