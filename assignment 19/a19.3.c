#include<stdio.h>
#include<string.h>
int main()
{
    char a[5][100];
    int i,j,count=0;
    printf("Enter 5 strings:\n");
    for(i=0;i<5;i++)
    {
        gets(a[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("%s\n",a[i]);
    }
   return 0;
}
