d1={"Student1":[90,85,88,92,78],
    "Student2":[76,89,30,85,90],
    "Student3":[92,88,78,84,92]}

l1= list(d1.keys())
l2=list(d1.values())

l3=[]
l4=[]
l5=[]

for i in l2:
    a=round(sum(i)/5)
    l3.append(a)
    b=i.index(max(i))
    b1="Exam "+str(b)
    l4.append(b1)
    c=(min(i))
    if c>=50:
        x="P"
        l5.append(x)
    else:
        x="F"
        l5.append(x)    



d11= { l1[i]: l3[i] for i in range(len(l1)) }
l6= (list(d11.keys()))
d12= { l1[i]: l4[i] for i in range(len(l1)) }
d13= { l1[i]: l5[i] for i in range(len(l1)) }
d14= { i+1 : l6[-i-1] for i in range(len(l1)) }



print(d11)
print(d12)
print(d13)
print(d14)



# x=d1["Student1"]
# y=d1["Student2"]
# z=d1["Student3"]

# xa=round(sum(x)/5)
# print(xa)

# xm=x.index(max(x))
# print(f"Exam {xm+1}")

# a=0
# for i in x:
#     if i >=50:
#         a=a+1
