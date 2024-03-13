#include<stdio.h>
#include<string.h>
struct songrecord
{
	char songtitle[100];
	char album[90];
	char artist[80];
	int length;
}
c1;

int main()
{
	c1.length=6 ;
	strcpy(c1.songtitle,"The Moon");
	strcpy(c1.album,"The rore cast");
	strcpy(c1.artist,"Shreya Goshal");
	printf("The songtitle is %s from the album of %s\n",c1.songtitle,c1.album);
	printf("The name of the artist is %s and length of the song is %d secs",c1.artist,c1.length);
	return 0;



	
	
	
	
	
	
}
	
	
	
	
	
	
