def Area(Radius, PI=3.14):
    Result =PI * Radius * Radius
    return Result

def main():
    RValue=10.5
    PIValue= 3.14

    # Positional Argument
    Ans = Area(RValue, PIValue)   # Ans = Area(10.5,3.14)
    print("Area of circle is : ", Ans)

    # Keyword Argument
    Ans = Area(PI=PIValue, Radius= RValue)
    print("Area of circle is : ", Ans)

    # Positional and second is Default Argument
    Ans = Area(10.5)  # Ans = Area(10.5,3.14)
    print("Area of circle is : ", Ans)

    # keyword and second is Default Argument
    Ans = Area(Radius=10.5)  # Ans = Area(10.5,3.14) 
    print("Area of circle is : ", Ans)

    # keyword Argument
    Ans = Area(PI= 7.10,Radius=10.5)  # Ans = Area(10.5,3.14)
    print("Area of circle is : ", Ans)


if __name__ =="__main__":
    main()
