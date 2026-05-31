import math

while True:
    print("\nScientific Calculator")
    print("+  -  *  /")
    print("^  (Power)")
    print("sqrt (Square Root)")
    print("sin  cos  tan")
    print("%  (Modulus)")

    operator = input("Enter operation: ")

    if operator == "sqrt":
        num = float(input("Enter number: "))
        print("Result:", math.sqrt(num))

    elif operator in ["sin", "cos", "tan"]:
        num = float(input("Enter angle in degrees: "))

        if operator == "sin":
            print("Result:", math.sin(math.radians(num)))

        elif operator == "cos":
            print("Result:", math.cos(math.radians(num)))

        elif operator == "tan":
            print("Result:", math.tan(math.radians(num)))

    else:
        num1 = float(input("Enter first number: "))
        num2 = float(input("Enter second number: "))

        if operator == "+":
            print("Result:", num1 + num2)

        elif operator == "-":
            print("Result:", num1 - num2)

        elif operator == "*":
            print("Result:", num1 * num2)

        elif operator == "/":
            if num2 != 0:
                print("Result:", num1 / num2)
            else:
                print("Error: Cannot divide by zero")

        elif operator == "^":
            print("Result:", num1 ** num2)

        elif operator == "%":
            print("Result:", num1 % num2)

        else:
            print("Invalid operator")

    choice = input("Do you want to continue? (yes/no): ").lower()

    if choice != "yes":
        print("Calculator stopped.")
        break