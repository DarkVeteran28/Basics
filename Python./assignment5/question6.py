l1=[1, 2, 3, 1, 2, 4, 5, 6, 5]
l2=[i for i in l1 if l1.count(i)>1]
w=[]
[w.append(i) for i in l2 if i not in w]
print(w)
