#include<stdio.h>
int add(int a, int b);
int main()
{
   printf("This is main function");//parameter
   //int c = add();// return value is putting or assign in C
   int c=55, d=47;
   printf("\nReturn value of add function is %d",add(c,d));
   return 1;
}
int add(int a, int b)
{
//    int a=10, b=20;
    return a+b;
}

