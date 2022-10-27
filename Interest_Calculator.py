print("Enter Principle Amount: ")
P = float(input())
print("Enter Annual Rate of Interest: ")
R = float(input())
print("Enter Time of Investment (in years): ")
T = float(input())
print("Enter 1 if you want Simple Interest and 2 if you want Compound Interest: ")
a = int(input())
if(a == 1):
    ans = (P*R*T)/100
    print("The Interest is:",ans)
    print("Total amount after",T,"years will be:",ans+P)
elif(a == 2):
    ans = P*(((1+(R/100))**T)-1)
    print("The Interest is:",ans)
    print("Total amount after",T,"years will be:",ans+P)
else:
    print("Invalid Input!")
