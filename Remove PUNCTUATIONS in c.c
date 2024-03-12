#include <stdio.h>
  #include <string.h>

  int main() {
        char punctuation[] = { '.', '?', '!', ':', ';',
                                        '-', '(', ')', '[', ']',
                                        ',', '"', '/'};

        char input[256]="hi,nanna!! how are u ??will u come to here;", output[256];
        int i, j, k, ch, flag;

        i = j = k = flag = 0;

        /* get the input string from the user */
    
        /* copy characters other than punctuations */
        while (input[i] != '\0') {

                flag = 0;
                ch = input[i];

                for (j = 0; j < 13; j++) {
                        if (ch == punctuation[j]) {
                                flag = 1;
                                break;
                        }
                }

                if (flag==0) {
                        output[k++] = input[i];
                }

                i++;
        }

        output[k] = '\0';

        /* print the resultant string */
        printf("Resultant String: %s\n", output);
        return 0;
  } 
