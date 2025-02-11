n=5
for x in range(1,1+n):
    for i in range (n-x):
        print(" " , end="")
    for j in range (1,(2*x)):
        print("*" , end="")
    print()
    
for a in range(3):
    for b in range((2 * n) - 1):
        if b == 0 or b == (2 * n) - 2:
            print("*", end="")
        else:
            print(" ", end="")
    print()

        