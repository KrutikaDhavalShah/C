def Demo():
    print("Inside Demo")

def Fun():
    print("Inside fun")

def Hello(FPTR):    #naked prototyping
    print("Inside Hello")
    FPTR()        #FPTR() is call to Demo()

Hello(Demo)
Hello(Fun)
