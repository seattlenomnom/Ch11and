/* Sourcefile for ch11and
 *
 *
 *
*/


/* includes */





/* defines */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>



/* structure definitions */





/* function declarations */







int main(int argc, char *argv[]){

    size_t len1, len2;
    char ch1, ch2;

    if( argc != 3){
        printf("usage ch11and operand1 operand2\n");
        exit(0);
    }

    len1 = strlen(argv[1]);
    len2 = strlen(argv[2]);

    if((len1 != 1) && (len2 !=1)){
        printf("usage: ch11and onedigit onedigit\n");
        exit(0);
    }

    ch1 = argv[1][0];
    ch2 = argv[2][0];

    if(!(isxdigit(ch1) && isxdigit(ch2))) {
        printf("not hex digits\n");
        exit(0);
    }













    return(0);
}


/* function definitions */




















