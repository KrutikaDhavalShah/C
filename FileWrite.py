import os

def Write_File(FileName):
    if(os.path.exists(FileName)):
        print("Enter the data that you want to write in file")
        Data = input()

        fd = open(FileName, "a")   #a : append(Write at end of file)
        fd.write(Data)

    else:
        print("File is not existing")
        return

def main():
    print("Enter file name to create")
    Name = input()
    Write_File(Name)

if __name__ == "__main__":
    main()