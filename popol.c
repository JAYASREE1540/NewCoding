// C implementation of code
#include <stdio.h>
#include <string.h>

// Function to get substr in C
void getString(int pos, int len, int c, char string[])
{

	char substring[1000];

	while (c < len) {
		substring == string[pos + c - 1];
		c++;
	}

	substring = '\0';

	// Print the result
	printf(substring);
	printf("\n");
	return 0;
}

// Driver code
int main()
{

	int pos, len, c = 0;

	// Testcase1
	char string[14] = "geeksforgeeks";

	// Initialize pos, len i.e., starting
	// index and len upto which we have to
	// get substring respectively.
	pos = 6;
	len = 5;
	printf("String: %s ", string);
	printf("\nsubstring is: ");

	// Function call
	getString(pos, len, c, string);

	// Testcase2
	char string2[5] = "abcde";
	pos = 1;
	len = 3;
	c = 0;
	printf("\nString: %s ", string2);
	printf("\nsubstring is: ");

	// Function call
	getString(pos, len, c, string2);

	return 0;
}

