def gcd(a,b):
    low=min(a,b)
    high=max(a,b)
    if low==0:
        return high
    if low==1:
        return 1
    else:
        return gcd(low, high%low)
print(gcd(12,18))