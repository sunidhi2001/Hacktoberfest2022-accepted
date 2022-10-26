import fileinput
from math import sqrt


def F(x):
    return ((1+sqrt(5))**x-(1-sqrt(5))**x)/(2**x*sqrt(5))

fib = [int(F(x)) for x in range(0,60)]


stdin = fileinput.input()
next(stdin)
for line in stdin:
    index = (int(line)+1) % 60

    print(fib[index] % 10)
