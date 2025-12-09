
start = input("Enter start time (hh:mm:ss): ")
end = input("Enter end time (hh:mm:ss): ")


h1, m1, s1 = map(int, start.split(":"))
h2, m2, s2 = map(int, end.split(":"))


t1 = h1 * 3600 + m1 * 60 + s1
t2 = h2 * 3600 + m2 * 60 + s2


diff = t2 - t1


if diff < 0:
    diff += 24 * 3600


hours = diff // 3600
minutes = (diff % 3600) // 60
seconds = diff % 60


print(f"Time Difference = {hours:02d}:{minutes:02d}:{seconds:02d}")
