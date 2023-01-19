#include<stdio.h>
#include<string.h>
int main()
{
    char a[10][100];
    int i,j,count=0;
    char temp[100];
    printf("Enter 10 strings:\n");
    for(i=0;i<10;i++)
    {
        gets(a[i]);
    }
    for(i=0;i<9;i++)
    {
        for (j=i+1;j<10;j++)
        {
            if(strcmp(a[i],a[j])>0)
            {
                strcpy(temp,a[i]);
                strcpy(a[i],a[j]);
                strcpy(a[j],temp);
            }
        }
    }
    for(i=0;i<10;i++)
    {
        printf("\n%s\n",a[i]);
    }
    return 0;
}

