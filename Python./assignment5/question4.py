list1=[1,2,[10,20],[3,4],[[30,40,50],[60,70],80]]
y1=[]
y2=[list1]
while y2:
    y3=y2.pop()
    for i in y3:
        if type(i)==int:
            y1.append(i)
        else:
            y2.append(i)
print(y1)
