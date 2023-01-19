#include<stdio.h>
#include<string.h>
void factorial(int x)
{
    int i,temp=1;
    for(i=x;i>0;i--)
    {
        temp=temp*i;
    }
    printf("Factorial of number is %d",temp);
}
int main()
{
    char str[][20]={"Anurag","Abhishek","Akash","Shailendra",
                     "Komal","Deeksha","Satyendra"};
      char name[20];
      printf("Enter your name:\n");
      gets(name);
      if(strcmp(str,name)==0)
      {
          int n;
          printf("Enter a number:\n");
          scanf("%d",&n);
          factorial(n);
      }
      else
        printf("User name is not in list,SORRY\n");
      return 0;
}
