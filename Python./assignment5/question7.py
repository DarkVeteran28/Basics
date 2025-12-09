l1=[1, 2, 2, 3, 4, 4, 5]
l2=[]
[l2.append(i) for i in l1 if i not in l2 ]
print(l2)