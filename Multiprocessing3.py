import time

def DisplayEven(No):
    for i in range(1,No,1):
        if(i % 2 == 0):
            print("Even number : " , i)
            
def DisplayOdd(No):
    for i in range(1, No, 1):
        if (i % 2 != 0):
            print("Odd number : ", i)

def main():
    print("Demonstration of Serial Programming")
    DisplayEven(2000)
    DisplayOdd(2000)

if __name__ == "__main__":
    start_time =time.process_time()
    main()
    end_time = time.process_time()         #process_time():execution time of a process
    print("Execution time is : ",end_time - start_time)
    #Execution time :  #0.09375 more accurate;