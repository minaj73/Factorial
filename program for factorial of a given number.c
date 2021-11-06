#include<stdio.h>
#include<conio.h>
int main()
{

   int no=0,fact=1;
   printf("\n enter number");
   scanf("%d",&no);
   while(no>0)
   {
       fact=fact*no;
       no--;
   }
   printf("\n factorial of given number  = %d",fact);
    getch();
    return 0;
}
