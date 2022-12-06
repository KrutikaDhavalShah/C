class LoopS
{
    public static void main(String arg[])
    {
        int Arr[]={10,20,30,40};
        int iCnt = 0;

        System.out.println("Traversal of array using for loop");
        for(iCnt = 0; iCnt < Arr.length; iCnt++)   //Same as C,C++,Java
        {
            System.out.println(Arr[iCnt]);
        }

        System.out.println("Traversal of array using while loop");
        iCnt=0;      //Reinitialised iCnt as it goes t
        while(iCnt < Arr.length)                   //Same as C,C++,Java
        {
            System.out.println(Arr[iCnt]);
            iCnt++;
        }

        System.out.println("Traversal of array using do-while loop");
        iCnt = 0;
        do                                         //Same as C,C++,Java
        {
            System.out.println(Arr[iCnt]);
            iCnt++;
        }while(iCnt < Arr.length);

        System.out.println("Traversal of array using for-each loop");
        for(int iNo : Arr)                          //Java Only
        {
            System.out.println(iNo);
        }
    }
}