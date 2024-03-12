#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
   char s1[30]="Serve",c;
   int i,len;

  //not using any temp variable and assume we can use only string array and   length
   len=strlen(s1);
   for(i=0;i<len/2;i++)
   {
         c=s1[i];
         s1[i]=s1[len-1-i];
         s1[len-1-1]=c;
   }
   printf("Reverse String is : %s",s1);

}

