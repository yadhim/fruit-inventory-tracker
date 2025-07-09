# FRUITI INVENTORY TRACKER
inventory = {}
while True:
    print("\nOptions:")
    print("1. Add fruit")
    print("2. View inventory")
    print("3. Check quantity")
    print("4. Exit")
    choice = input("inter choice(1-4):")
    if choice == "1":
        fruit = input("fruit name: ")
        quantity = int(input("Quantity:"))
        inventory[fruit] = quantity
        print(f"{quantity} {fruit} added!")
    elif choice == "2":
        print("\nCurrent inventory:")
        for fruit, quantity in inventory.items():
            print(f"-{fruit}: {quantity}")
    elif choice == "3":
        fruit = input("which fruit?")
        if fruit in inventory:
            print(f"There are {inventory[fruit]} {fruit} available")
        else:
            print(f"NO {fruit} in inventory")
    elif choice == "4":
        print("Goodbye!")
        break
    else:
        print("invalid choice.Try again.")
