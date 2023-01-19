#include<stdio.h>
#include<string.h>
int main()
{
    char s[10][100];
    int i,j,flag=0,temp=0;
    printf("Enter 10 email address:\n");
    for(i=0;i<10;i++)
    {
        gets(s[i]);
    }
    for(i=0;i<10;i++)
    {
        flag=0;
        for(j=0;s[i][j] != '\0';j++)
        {
            if(s[i][j]=='@')
            {
                 flag++;
                 temp++;
            }
        }
        if(flag==0)
        printf("%s\n",s[i]);
    }
    if(temp==i)
    {
        printf("All email addresses are valid.\n");
    }
    return 0;
}
