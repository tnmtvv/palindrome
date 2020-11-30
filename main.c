#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define N 256


int ifpalindrom(char a[N],int begin, int end )
{
  if (end <= begin)
    return 1;
  if(a[end]== a[begin])
    return (ifpalindrom(a, begin+1, end-1));
  else return 0;

}

int main()
{

    setlocale(LC_ALL, "Russian");

    char str[N];
    printf("Введите строку: \n");
    gets(str);
    int j =0,i;

    for(int i = 0 ; i < strlen(str); i++)
    {
        if (str[i] != ' ')
            {
              str[j] = str[i];
              j++;
            }
    }
    str[j] = '\0';



    if (ifpalindrom(str,0,strlen(str)-1))
        printf("строка - палиндром");
    else
        printf("строка - не палиндром");


 return 0;
}
