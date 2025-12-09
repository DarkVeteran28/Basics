import numpy as np

array=np.array([[1,2,3,4,5],
                [6,7,8,9,10]])

# print(np.sum(array))
# print(np.mean(array))
# print(np.std(array))    #standard deviation
# print(np.var(array))    #variance
# print(np.min(array))    
# print(np.max(array))    
# print(np.argmax(array))    #index of maximum
# print(np.argmin(array))    #index of minimum

print(np.sum(array,axis=0)) # axis=0.....collapse downwards(column wise)
print(np.sum(array,axis=1)) # axis=1.....collapse sideways(row wise)

# axis = which dimension i want to remove



