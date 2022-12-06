from sys import *
import os

def DirectoryWatcher(path):

    flag = os.path.isabs(path)    #check if path is absolute or not
    if flag == False:
        path = os.path.abspath(path)   #if path is not absolute it is converted
                                       #into absolute path

    exists = os.path.isdir(path)
    
    if exists:
        for foldername, subfolder, filname in os.walk(path):  #os.walk is platform specific module
            print("Current folder is : "+foldername)
            for subf in subfolder:
                print("Sub folder of "+foldername+"is :"+subf)
            for filen in filname:
                print("File inside "+foldername+"is : "+filen)
                    #if filen.lower().endswith(extention)
                        #print()

                #print("With size : ",os.path.getsize(os.path.join(foldername,filen))) #getCWD()-current working Directory
                #2 sizes-1)Size on Hard disk(4kbi.e4096bytes), 2)Actual Size-getSize gives actual Size
            print(' ')
    else:
        print("Invalid Path")

def main():
    print("---- Marvellous Infosystems by Piyush Khairnar-----")

    print("Application name : " +argv[0])

    if (len(argv) != 2):
        print("Error : Invalid number of arguments")
        exit()
    
    if (argv[1] == "-h") or (argv[1] == "-H"):
        print("This Script is used to traverse specific directory")
        exit()

    if (argv[1] == "-u") or (argv[1] == "-U"):
        print("usage : ApplicationName AbsolutePath_of_Directory")
        exit()

    try:
        DirectoryWatcher(argv[1])    #DirectoryWatcher.py A

    except ValueError:
        print("Error : Invalid datatype of input")

    except Exception:
        print("Error : Invalid input")

if __name__ == "__main__":
    main()
