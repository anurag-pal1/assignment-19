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
        for(j=0;j<strlen(a[i]);j++)
        {
            if(a[i][j]=='a'||a[i][j]=='e'||a[i][j]=='i'||a[i][j]=='o'||a[i][j]=='u')
            {
                count++;
            }
        }
    }
    printf("Total numbers of vowels in given strings is %d",count);
    return 0;

}
