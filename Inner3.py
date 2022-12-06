def Add(A,B):
    return A + B

def Sub(A,B):
    return A - B

def Calculator(Target,Value1,Value2):
    return Target(Value1,Value2)

Ret = Calculator(Target = Add,Value1= 10,Value2 =11)
print("Addition is : ",Ret)

Ret = Calculator(Sub,10,1)
print("Subtraction is : ",Ret)