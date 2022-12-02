//Accept one character from user and 
//check whether that character is vowel(a,e,i,o,u) or not

// Input: E                                       Output: TRUE
// Input: d                                      Output : FALSE

#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char CValue)
{
    if((CValue == 'A') || (CValue == 'a') ||
    (CValue == 'E') || (CValue == 'e') ||
    (CValue == 'I') || (CValue == 'i') ||
    (CValue == 'O') || (CValue == 'o') ||
    (CValue == 'U') || (CValue == 'u'))
    {
      return TRUE;
    }
    else
    {
      return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character \n");

    scanf("%c", &cValue);

    bRet = ChkVowel(cValue);

    if(bRet == TRUE)
    {
      printf("It is a Vowel");
    }
    else
     {
      printf("It is not a Vowel");
    }

    return 0;
}