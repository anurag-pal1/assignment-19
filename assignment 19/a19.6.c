#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    printf("Enter no. of strings in list.\n");
    scanf("%d",&n);
    char s[n][100];
    int i,flag,k;
    printf("Enter %d strings:\n",n);
    for(i=0;i<=n;i++)
    {
        gets(s[i]);
    }
    for(k=0;k<n;k++)
    {
        flag=0;
        for(i=0;i<strlen(s[k]);i++)
        {
            if(s[k][i]!=s[k][strlen(s[k]-1)])
                   {
                       flag++;
                   }
        }
        if(flag>0)
        {
            printf("%s\n",s[k]);
        }
    }
    return 0;
}
