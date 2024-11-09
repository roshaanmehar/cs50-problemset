from cs50 import get_float

while True:
    cash = get_float("Please enter the amount of change owed: ")
    if cash > 0:
        break


#calculating quarters
count = 0
cash = cash * 100

while cash >= 25:
    cash -= 25
    count += 1
    # print(f"{count}")

#calculating 10 cents
while cash >= 10:
    cash -= 10
    count += 1
    # print(f"{count}")

#calculating fives
while cash >= 5:
    cash -= 5
    count += 1
    # print(f"{count}")

#calculating cents
while cash >= 1:
    cash -= 1
    count += 1
    # print(f"{count}")

print(f"{count}")
