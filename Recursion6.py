#Backtracking
#Recursion types - head recursion and Tail Recursion

def Display(No):
    if(No > 0):
        No = No - 1
        Display(No)        #head recursion;recursion call is not at lst line
        print(No)

Display(4)


    