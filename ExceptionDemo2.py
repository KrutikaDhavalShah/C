def main():
    try:
        print("Enter first number")
        No1 = int(input())

        print("Enter second number")
        No2 = int(input())


        Ans = No1 / No2
        print("Division is :", Ans)

    except ZeroDivisionError:
        print("Exception occured")

    except ValueError:
        print("Inside Value Error")

    except Exception:
        print("Inside last except block")

    finally:
        print("Inside Finally Block")     #dar veles finally block execute hoto

if __name__ == "__main__":
    main()