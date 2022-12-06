#Automation script which accept directory name from user
#and display all names of duplicate files from that directory

from sys import *
import os
import hashlib

def hashfile(path,blocksize = 1024):
    fd = open(path,'rb')
    hasher = hashlib.md5()
    buf = fd.read(blocksize)

    while len(buf) > 0:
        hasher.update(buf)
        buf = fd.read(blocksize)

    fd.close()

    return hasher.hexdigest()

def FindDuplicate(path):
    flag = os.path.isabs(path)
    if flag == False:
        path = os.path.abspath(path)

    exists = os.path.isdir(path)

    dups ={}             #dictionary
    if exists:
        for dirName,subdirs,fileList in os.walk(path):
            for filen in fileList:
                path = os.path.join(dirName,filen)
                file_hash = hashfile(path)
                if file_hash in dups:
                    dups[file_hash].append(path)
                else:
                    dups[file_hash] = [path]

        return dups
    else:
        print("Invalid Path")

def main():
    print("---- Marvellous Infosystems by Piyush Khairnar-----")

    print("Application name : " + argv[0])

    if (len(argv) != 2):
        print("Error : Invalid number of arguments")
        exit()

    if (argv[1] == "-h") or (argv[1] == "-H"):
        print("This Script is used to traverse specific directory and display checksum of files")
        exit()

    if (argv[1] == "-u") or (argv[1] == "-U"):
        print("usage : ApplicationName AbsolutePath_of_Directory Extension")
        exit()

    try:
        arr = DisplayChecksum(argv[1])

    except ValueError:
        print("Error: Invalid datatype of input")

    except Exception as E:
        print("Error: Invalid input",E)

if __name__ == "__main__":
    main()