#include<stdio.h>
int main()
{
int mango,grapes,apple,sum,balance=2000,q1,q2,q3;
q1=2;
q2=3;
q3=1;
mango=200;
grapes=400;
apple=350;
mango=mango*q1;
grapes=grapes*q2;
apple=apple*q3;
sum=mango+grapes+apple;
balance=balance-sum;
printf(" mango= %d X %d\n",mango,q1);
printf("grapes= %d X %d\n", grapes,q2);
printf("apple = %d X %d\n", apple,q3);
printf("Total cost is %d\n",sum);
printf("balance is %d\n",balance);
return 0;
}
