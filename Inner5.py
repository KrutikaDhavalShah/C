# Demonstration of Decorator: To explain decorator we have follow all steps
# Explain all codes from Inner1.py to Inner5.py
# This is similar to updator in LB (if iNo is negative: iNo = -iNo)
# Check notebook for dry run
#Decorator is adding new functionality without changing existing functionality

def Subtraction(No1,No2):     #200; we cannot edit subtraction function
                              # we will get file of it ;written by other developer
    Ans = 0
    Ans = No1-No2
    return Ans

def Decorated_Function(Function_Name):  #Function_Name = 200
    def Inner(A,B):  #300
        if(A < B):
            A,B =B,A   # swapping
        Output = Function_Name(A,B)     #200(12,8); ctrl goes to Subtraction
        return Output                    #4
    return Inner     # return 300

def main():     #100
    Value1 = int(input("Enter first number: "))  #8
    Value2 = int(input("Enter second number: ")) #12

    New_Function = Decorated_Function(Subtraction) #Decorated_Function(200)
    Ret = New_Function(Value1,Value2)   #Ret = 300(8,12);Control goes to Inner
    print("Subtraction is :", Ret)

if __name__ =="__main__":
    main()


