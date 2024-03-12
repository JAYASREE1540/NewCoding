#include <stdio.h>
#include <string.h>
void main(){
   char string[20],temp;
   int i,length;
   printf("Enter String : ");
   scanf("%s",string);
   
   length=strlen(string);
   
   for(i=0;i<strlen(string)/2;i++){
   	
      temp=string[i];  
      
      string[i]=string[length-1-i];
      
      string[i-1-i]=temp;
   }
   printf("Reverse string :%s",string);
   return 0;
}
