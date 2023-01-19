#include<stdio.h>
#include<string.h>
int main()
{
    char password[10],username[10],ch;
    int i;
    printf("Enter User name:\n");
    gets(username);

    printf("Enter the password <any 8 characters>:\n");
    for(i=0;i<8;i++)
    {
        ch=getchar();
        password[i]=ch;
        ch='*';
        printf("%c",ch);
    }
    password[i]='\0';
    for(i=0;i<8;i++)
    {
        printf("%c\n",password[i]);
    }
    return 0;
}
