import os
import multiprocessing

def Square(No):
    print("PID for the worker proces is {} for the input{}".format(os.getpid(), No))
    return (No * No)

def main():
    print("Process id of our application is :", os.getpid())
    Data = [1,2,3,4,5]

    Result = []

    pool = multiprocessing.Pool()

    Result = pool.map(Square, Data)

    print("Result after square operation is :", Result)

if __name__ == "__main__":
    main()
  