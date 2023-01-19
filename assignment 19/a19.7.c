#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int validate_number(char *str)
{
    while(*str)
    {
        if(!isdigit(*str))
        {
            return 0;
        }
        str++;
    }
    return 1;
}
int validate_ip(char *ip)
{
    int i,num,dots=0;
    char *ptr;
    if(ptr==NULL)
        return 0;
        ptr=strtok(ip,".");
    while(ptr)
    {
        if(!validate_number(ptr))
            return 0;
        num=atoi(ptr);
        if(num>=0&&num<=255)
        {
            ptr=strtok(NULL,".");
            if(ptr != NULL)
                dots++;
        }
        else
            return 0;

    }
    if(dots != 3)
        return 0;

    return 1;
}
int main()
{
    char ip[][20]={"192.168.4.1",
                 "172.16.253.1",
                 "192.800.100.1",
                 "125.512.100.abc" };
                 int i;
                 for(i=0;i<4;i++)
                 {
                     validate_ip(ip[i])?printf("Valid\n"): printf("Not valid\n");
                 }
                 return 0;
}
