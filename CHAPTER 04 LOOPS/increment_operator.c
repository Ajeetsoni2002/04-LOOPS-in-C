#include<stdio.h>
int main()
{
int a=44;
 printf("the value after a++ is %d\n",++a);
 a++;
 ++a;
 ++a;
 a+=10;
 printf("the value of a is %d\n",a);
a-=20;
printf("the value of a is %d\n",a);

a/=2;
printf("the value of a is %d\n",a);

a%=5;
printf("the value of a is %d\n",a);




        return 0;
}


