#include <stdio.h>
int main()
{
        int a ;
printf("enter the value of a ");
scanf("%d",&a);
        do
        {

                printf("the value of a is %d\n", a);
                a++;
        } while (a <= 10);
       
        return 0;
}