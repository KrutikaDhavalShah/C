class Hello {
  private:
  static int aStaticVariable = 1;
  int aNonStaticVariable = 2;

  private:
   static void aStaticMethod() {
    cout<<aNonStaticVariable << "\n";
    aNonStaticMethod();
  }

  private void aNonStaticMethod() {
   cout << aStaticVariable << "\n";

}

};

int main()
{
 Hello obj1;
 obj1.aNonStaticMethod();
 obj1.aStaticMethod();

 return 0;

}