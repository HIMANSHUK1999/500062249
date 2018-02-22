#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch[100],k;
    int i,j,noc;
    printf("Enter the limit till which you want to enter the array");
    scanf("%d",&j);
    printf("Enter the your name in the array.\n");
    for(i=0;i<j;i++)
    {
        scanf("%c",&ch[i]);
    }
    printf("The name entered in reverse is\n");
    for(i=j-1;i>=0;i--)
    {
        printf("%c",ch[i]);

    }
    printf("Enter the character whose you had to find the specific count.\n");
    scanf("%c ",&k);
    for(i=0;i<j;i++)
    {
        if(k==ch[i])
        noc++;
    }
    /*
    printf("The specific count of the %c character is %d",k,noc);
    */
    return 0;
}
