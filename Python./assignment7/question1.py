def pol_add(l1,l2):
        l3=[]
        if len(l1)==len(l2):
            for i in range(l1):
                l3.append(l4[i]+l5[i])
            return l3
        elif l1==[]:
            return l2
        elif l2==[]:
            return l1
        else:
            a=max(len(l1),len(l2))
            b=min(len(l1),len(l2))
            if len(l1) > len(l2):
               l4 = l1.copy()
               l5 = l2.copy()
            else:
               l4 = l2.copy()
               l5 = l1.copy()
            
            for i in range(a-b):
                l3.append(l4[i])
            
            for i in range(b):
                l3.append(l4[a - b + i]+l5[i])
            
            return l3

l1=[2,-6,-1,20]
l2=[-5,2]
print(pol_add(l1,l2))