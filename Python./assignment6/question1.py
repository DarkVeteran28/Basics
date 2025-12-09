st ="John Doe 30 60000 john.doe@example1.com; Jane Smith 28 55000 jane.smith@example2.com; Robert Johnson 35 70000 robert.johnson@example3.com"
d1={}
a=[]
b=[]
c=[]
d=[]
e=[]
w=0
l1=st.split(';')
for i in l1:
    x=i.split()
    first,last,age,salary,email=x
    a.append(first)
    b.append(last)
    c.append(int(age))
    d.append(int(salary))
    e.append(email)
employee_data={"First_name":a,"Last_name":b,"Age":age,"Salary":d,"Email":e}

print("employee_data =",employee_data)

am = c.index(max(c))
print(a[am]+' '+b[am])

sm = d.index(max(d))
print(a[sm]+' '+b[sm])

aa=round(sum(c)/3,0)
print("Average age:",aa)
    
sa=round(sum(d)/3,0)
print("Average salary:",sa)





