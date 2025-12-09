def evenpositions(l):
    l1=[]
    if len(l) == 0:
      return([])
    else:
        l1=[l[i] for i in range(0,len(l),2)]
    return l1
l=[19,3,44,44,3,19]
print(evenpositions(l))