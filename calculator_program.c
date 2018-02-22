#include <stdio.h>

int main()
{
   unsigned int i,j,n;
    float k,a,b;
    do
    {
    printf("Enter the case no. according to operation you want to perform.\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Divison");
    scanf("%u",&i);
    switch(i)
    {
        case 1:
        do
        {
        printf("Enter two numbers\n");
        scanf("%u%u",&i,&j);
        k=i+j;
        printf("The sum is %.2f\n",k);
        printf("Do you want to continue with addition:(1|0)\n");
        scanf("%u",&n);
        }while(n==1);
        break;
        case 2:
        do
        {
         printf("Enter two numbers\n");
         scanf("%u%u",&i,&j);
         k=j-i;
         printf("The difference is %.2f\n",k);
         printf("Do you want to continue with subtraction:(1|0)\n");
         scanf("%u",&n);
         }while(n==1);
          break;
         case 3:
         do
         {
          printf("Enter two numbers\n");
          scanf("%u%u",&i,&j);
          k=i*j;
          printf("The product is %.2f\n",k);
          printf("Do you want to continue with product:(1|0)\n");
          scanf("%u",&n);
         }while(n==1);
          break;
         case 4:
         do
          {
           printf("Enter two numbers \n");
           scanf("%f%f",&a,&b);
           k=a/b;
           printf("The quotient is %f\n",k);
           printf("Do you want to continue with division:(1|0)\n");
           scanf("%u",&n);
          }while(n==1);
           break;
    }
    printf("Do you want to continue with another operation(1|0)");
    scanf("%u",&n);
    }while(n==1);
    return 0;
}
