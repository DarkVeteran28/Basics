def matrixflip(m,d):
    x=[] 
    y=[]
    if d=='h':                                   
       for i in m:
          x.append(list(reversed(i)))
       return x
    if d=='v':
        for i in range(len(m)):
            y.append(m[len(m)-i-1])
        return y
    else:
        return m
       
        
        
m=[[1,2,3],[4,5,6],[7,8,9]]
print(matrixflip(m,'h'))
print(matrixflip(m,'v'))
print(matrixflip(m,'a'))