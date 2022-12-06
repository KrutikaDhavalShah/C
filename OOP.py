#Accept 2 numbers and perform addition and subtraction of it

#Kay karaycha ahe?    ->Behaviours
#        Addition and Subtraction
#Kay lagnar ahe?      ->Characteristics
#       2 numbers

#Class = Characteristics + Behaviour
# Class = Data + Functions

class Arithematic:
    def __init__(self, A, B):           #Constructor
        self.No1 = A
        self.No2 = B

    def Add(self):
        return self.No1 + self.No2

    def Sub(self):
        return self.No1 - self.No2

def main():
    print("Enter first number : ")
    Value1 = int(input())

    print("Enter second number : ")
    Value2 = int(input())

    obj=Arithematic(Value1, Value2)

    Ans = obj.Add()        #0X100.Add()     Add(0X100)
    print("Addition is : ",Ans)

    Ans = obj.Sub()
    print("Subtraction is : ", Ans)



if __name__ == "__main__":
    main()