def Display(No):
    Cnt = 0
    if(Cnt < No):
        print("Hello")
        Cnt = Cnt + 1
        Display(No)

Display(4)

#[Previous line repeated 992 more times]
# File "C:\Users\ASUS\Desktop\Python\NovSix\Recursion1.py", line 4, in Display
#   print("Hello")
#RecursionError: maximum recursion depth exceeded while calling a Python object
