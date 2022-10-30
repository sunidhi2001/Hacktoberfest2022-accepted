import random
import math

lower = int(input("The lower bound is:- "))


upper = int(input("The upper bound is:- "))


a = random.randint(lower, upper)
print("\n\tYou've only ",
	round(math.log(upper - lower + 1, 2)),
	" chances to guess the integer!\n")


count = 0


while count < math.log(upper - lower + 1, 2):
	count += 1


	guess = int(input("Guess a number:- "))


	if a == guess:
		print("Congratulations you did it in ",
			count, " try")

		break
	elif a > guess:
		print("Try with a higher number!")
	elif a < guess:
		print("Try with a lower number!")


if count > math.log(upper - lower + 1, 2):
	print("\nThe number is %d" % a)
	print("\tBetter Luck Next time!")
