#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * is_lower : prints the alphabets in lower case
 * 
 * return: 0
*/
int main(void)
{
    int alphabet;
    for ( alphabet = 'a'; alphabet <= 'z'; alphabet ++)
    {
        printf("%c \n", alphabet);
    }
}