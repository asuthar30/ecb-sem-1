import math

for y in range(15, -16, -1):
    for x in range(-30, 31):
        X = x / 15
        Y = y / 10

        a = X * X + Y * Y - 1

        if a**3 - X * X * Y**3 <= 0:
            print("I love you", end="")
        else:
            print(" ", end="")

    print()