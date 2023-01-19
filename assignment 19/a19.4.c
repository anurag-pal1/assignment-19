#include<stdio.h>
#include<string.h>
int main()
{

    char s[10][100];
    char temp[100];
    int i,flag=0;
    printf("Enter 10 strings:\n");
    for(i=0;i<10;i++)
    {
        gets(s[i]);
    }
    printf("Enter string which you want to find in list.\n");
    gets(temp);
    for(i=0;i<10;i++)
    {
        if(strcmp(s[i],temp)==0)
        {
           flag++;
        }
    }

    if(flag==1)
        printf("String is found.\n");
    else
        printf("String is not found.\n");
    return 0;
}

