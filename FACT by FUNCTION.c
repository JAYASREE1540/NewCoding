#include<stdio.h>

int findFact(int);

int main(){

    int x,fact,n=5;


    fact = findFact(n);

    printf("The factorial of %d is: %d",n,fact);

    return 0;

}
int findFact(int n){

    int x,fact=1;

    for(x=1;x<=n;x++)

      fact=fact*x;

     return fact;

}
