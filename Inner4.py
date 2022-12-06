def Outer():          #id=100
    print("Inside Outer")
    #print(id(Outer))

    def Inner():      #200
        print("Inside Inner")

    print(id(Inner))

    return Inner        #Outer should return Inner();return 200

ret = Outer()      #ret = 100()
print(type(ret))
print(id(ret))
ret()             #Call to Inner();200()