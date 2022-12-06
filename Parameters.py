#Positional Arguments

def Add1(No1,No2):                         #positional argument
    print("Value of No1",No1)
    print("Value of No2",No2)
    return No1 + No2

def Sub(No1,No2):
    print("Value of No1",No1)
    print("Value of No2",No2)
    return No1 - No2

def main():
    Ans=0
    Ans= Add1(10,11)
    print("Addition is : ", Ans)

    Ans= Add1(No2 = 10,No1 = 11)   #keyword argument
    print("Addition is : ", Ans)

    Ans = Sub(No1=10, No2=11)
    print("Subtraction is : ", Ans)

if __name__ == "__main__":
    main()

