from cs50 import get_int

while True:
    height = get_int("Please enter a valid number between 1 and 8: ")
    if height >= 1 and height <= 8:
        break

count = 1


while count <= height:
    spaces = 0
    hashr = 0
    hashl = 0

    while spaces < (height - count):
        print(" ", end="")
        spaces += 1
    while hashr < count:
        print("#", end="")
        hashr += 1
    print("  ", end="")
    while hashl < count:
        print("#", end="")
        hashl += 1
    print()
    count += 1
