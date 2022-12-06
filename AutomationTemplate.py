from sys import *

def Script_Task(No):
    if((No % 2) == 0):
        print("It is even")

    else:
        print("It is odd")


def main():
    print("----------------Marvellous Infosystems Automations------------------")
    print("Automation Script started with name : ",argv[0])

    if(len(argv) != 2):
        print("Error : Insufficient arguments")
        print("Use -h for help and use -u for usage of script")
        exit()
        
    if((argv[1] == "-h") or (argv[1] == "-H")):
        print("Help: This script is used to perform______________")

    elif ((argv[1] == "-u") or (argv[1] == "-U")):
        print("Usage : Provide ________number of arguments as")
        print("First argument as :______________")
        print("Second argument as :______________")
        exit()

    else:
        Script_Task(int(argv[1]))

if __name__ == "__main__":
    main()