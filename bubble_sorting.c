#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100],i,j,k,c;
    do
    {
    printf("Enter the limit in the array\n");
    scanf("%d",&j);
    printf("Enter the elements\n");
    for(i=0;i<j;i++)
    {
        scanf("%d",&a[i]);
    }
    for(c=0;c<j;c++)
    {
        for(i=0;i<j;i++)
    {
        if(a[i]>a[i+1])
        {
            k=a[i];
            a[i]=a[i+1];
            a[i+1]=k;
        }

    }
    }
    printf("The array after bubble sorting is\n");
    for(i=0;i<j;i++)
    {
        printf("%d\n",a[i]);
    }
    printf("Do you want to again do  bubble sorting(1|0)\n");
    scanf("%d",&c);
   }while(c==1);
 return 0;
}
