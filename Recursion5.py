def Display(No):
    if(No > 0):
        print(No)
        No = No - 1
        Display(No)         #tail recursion recursion call is at lst line
Display(4)


    