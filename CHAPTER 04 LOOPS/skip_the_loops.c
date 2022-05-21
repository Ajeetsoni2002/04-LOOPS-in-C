#include<stdio.h>
int main()
{
for(int i=1; i<=10; i++ ){

    //   printf ("the value of i is %d\n",i);//this is not a right method

        if(i==8)
        continue;
               printf ("the value of i is %d\n",i);
}

        return 0;
}