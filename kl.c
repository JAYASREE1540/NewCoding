#include <stdio.h>
#include <string.h>
 
int main()
{
    char str[100],revStr[100];
    int i,j;
 
    printf("Enter a string: ");
	scanf("%[^\n]s",str);//read string with spaces

 
    /*copy characters from last index of str and
 store it from starting in revStr*/
    j=0;
    for(i=(strlen(str)-1); i>=0;i--)
        revStr[j++]=str[i];
     
    //assign NULL in the revStr
    revStr[j]='\0';
 
    printf("\nOriginal String is: %s",str);
    printf("\nReversed String is: %s",revStr);
 
    return 0;
}

