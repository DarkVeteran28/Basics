x= ["mix", "xyz", "apple", "xerox", "expect", "xanadu", "pixel"]
y=[]
y1=[]
[y.append(i) for i in x if i[0]=='x']
[y1.append(i) for i in x if i[0]!='x']
y1.sort()
y.sort()
x=y+y1
print(x)
