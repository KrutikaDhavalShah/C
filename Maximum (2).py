print("Application to demonstrate industrial programming")

import MarvellousModule

def main():
    print("Value of __name__ from main is : ", __name__)
    print("Enter first number : ")
    no1 = int(input())
    print("Enter second number: ")
    no2 = int(input())

    Ret = MarvellousModule.Addition(no1,no2)

    print("Addition is : ", Ret)


if __name__ == "__main__":
    main()
            