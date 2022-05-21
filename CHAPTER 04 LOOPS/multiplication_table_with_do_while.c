#include<stdio.h>
int main()
{
int i=1,num;
printf("enter the value of n");
scanf("%d",&num);

do{
        printf("the table is %d\n",i*num);
   i++;     
}while(i<=10);




        return 0;
}