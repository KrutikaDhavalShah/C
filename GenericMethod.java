class GenericMethod 
{

    public static <T> void Display(T Arr[])
    {
        for(int i = 0; i<Arr.length;i++)
        {
            System.out.println(Arr[i]);
        }
    }
    public static void main(String a[]) 
    {
        Integer iArr[] = {10,20,30,40};   
        Display(iArr);

        Character cArr[] = {'A','B','C','D'};   
        Display(cArr);

        Float fArr[] = {10.9f,50.1f,89.76f,70.0f};   
        Display(fArr);
    }
}