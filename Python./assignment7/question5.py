def increasing(l):
  if len(l) <= 1:
     return(True)
  else:
    l1=l.sort()
    if l==l1:
        return(True)
    else:
        return(False)

l=[3,14,14,23] 
print(increasing(l))
            