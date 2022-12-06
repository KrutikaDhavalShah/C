#4+3+2+1 = 10

#Approach 1
def Display(No):
    iSum = 0
    while(No > 0):
        print(No)
        iSum = iSum + No
        No = No - 1
    print("Summation is : ",iSum)

Display(4)

#Approach 2
def Add(No):
    Ans = 0
    while(No>= 0):
        Ans = Ans + No
        No = No -1
    return Ans

Ret = Add(4)

print("Result is: ", Ret)
