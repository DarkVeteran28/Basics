
start = input("Enter start date (DD-MM-YYYY): ")
end = input("Enter end date (DD-MM-YYYY): ")


s_day = int(start[0:2])
s_month = int(start[3:5])
s_year = int(start[6:10])

e_day = int(end[0:2])
e_month = int(end[3:5])
e_year = int(end[6:10])


month_days = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]


if (s_year > e_year) or (s_year == e_year and s_month > e_month) or (s_year == e_year and s_month == s_month and s_day > e_day):
    temp_day, temp_month, temp_year = s_day, s_month, s_year
    s_day, s_month, s_year = e_day, e_month, e_year
    e_day, e_month, e_year = temp_day, temp_month, temp_year


year_diff = e_year - s_year
month_diff = e_month - s_month
day_diff = e_day - s_day


if day_diff < 0:
    month_diff -= 1
    prev_month = e_month - 1
    if prev_month == 0:
        prev_month = 12
    day_diff += month_days[prev_month - 1]

if month_diff < 0:
    month_diff += 12
    year_diff -= 1


print("Date Difference =", year_diff, "years,", month_diff, "months,", day_diff, "days")
