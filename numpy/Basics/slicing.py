import numpy as np
array=np.array([[1,2,3,4],
                [5,6,7,8],
                [9,10,11,12],
                [13,14,15,16]])

#array[start:end:step]

#print(array[0: 3 :1])
print(array[  : , -1]) #Printing rows only

print(array[:, ::-1 ]) # Printing Columns 

print(array[ 2:  ,  :2 ]) # Printing the required portion/quadrant out of matrix
