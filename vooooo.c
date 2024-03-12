#include<stdio.h>{
	int main()
	{
		char name;
		printf("Enter any name: ");
		scanf("%c",&name);
		switch(name)
		{
			case'a':
		    case'i':
		    case'o':
		    case'u':
		    case'e':
		    case'A':
		    case'I':
		    case'E':
		    case'O':
		    case'U':
		    	printf("%c is vowel",name);
		    	break;
		    
		    	default:printf("%c is not a vowel",name);
		    }
		    	return 0;
		}
