#if we create file with file already existing then it will overwrite

def CreateFile(FileName):
    fd = open(FileName,"w")      #w means write

def main():
    print("Enter file name to create")
    Name = input()
    CreateFile(Name)

if __name__ == "__main__":
    main()