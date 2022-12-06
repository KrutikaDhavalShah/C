import time
import multiprocessing

def DisplayEven(No):
    for i in range(1,No,1):
        if(i % 2 == 0):
            print("Even number : " , i)
            
def DisplayOdd(No):
    for i in range(1, No, 1):
        if (i % 2 != 0):
            print("Odd number : ", i)

def main():
    print("Demonstration of Parallel Programming using multiple processes")
    Number = 200
    p1 = multiprocessing.Process(target = DisplayEven, args =(Number,))  #p1,p2 : process handles
    p2 = multiprocessing.Process(target = DisplayEven, args =(Number,))

    p1.start()    #process is scheduled but not executed and
                  # it will run when it will get resources
    p2.start()    #pvm scheduler will decide when to execute the process

    print("End of main")

if __name__ == "__main__":
    start_time = time.process_time()
    main()
    end_time = time.process_time()         #process_time():execution time of a process
    print("Execution time is : ",end_time - start_time)
    #Execution time :  #0.09375 more accurate;