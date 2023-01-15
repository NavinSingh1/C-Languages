//C Program to Upper Case and Lower Case Conversion and Vice-Versa
#include<stdio.h>
#include<string.h>
#include<conio.h>

void main()
{
    
    while(1)
    {
 char str[20];
    int i;

    printf("\n\nEnter The String: ");
    scanf("%s",str);

    for (i=0;i<=strlen(str);i++)
  {
        if (str[i]>=65&&str[i]<=90)
        {
         str[i] = str[i] + 32;
  }    

        else if (str[i] >= 97 && str[i] <= 122)
        {
         str[i] = str[i] - 32;
  }    
    }
    
    printf("\n\nConvert String(Lower/Upper) Is: %s\n\n",str);
 }

    return 0;
}
