def Display(No):
    if(No > 0):
        print("Hello")
        No = No - 1
        Display(No)        # recursive function call

Display(4)    #Function call

#recursion function is calling the same function from that function itself