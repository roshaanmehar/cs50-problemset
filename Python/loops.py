

people = {
    "roshaan": "03224116525",
    "ali": "03364028403",
    "shayan": "03224507412
}

name = input("Name: ")


if name in people:
    number = people[name]
    print(f"Found {name}")
    break
else:
    print("Not found")
