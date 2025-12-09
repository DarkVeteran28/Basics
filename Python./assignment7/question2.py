def car_rent(km,days=3):
    rent=4000*days
    rent1=1500*days+9*km
    if rent>rent1:
        return 'B'
    if rent1>rent:
        return 'A'

print(car_rent(800,2))
print(car_rent(10))
