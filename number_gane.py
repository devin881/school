import random

num = random.randint(1, 999)

while True:
    guess = int(input("enter your guess: "))
    if guess < num:
        print("number to low")
    elif guess > num:
        print("number to high")
    else:
        print("your done")