#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * prints_random: prints a random number
 * returns: 0
 **/
 
int main()
{
    int x;
    srand(time(0));
    x = rand() - RAND_MAX / 2;
    printf("%d \n", x);
    return(0);
}


/**
 * check_positive_or_negative: checks if a random number is positive or negative
 * 
 * return: 0
*/
#include <stdio.h>
int main()

{
    int x;
    srand(time(0));
    x = rand() - RAND_MAX / 2;

    printf("%d \n", x);
    if(x > 0) {
     
        printf("the number is positive \n ", x);
    }
    else if (x < 0)
    {

        printf(" the number is negative \n" ,x);
    }
    else 
    {
        printf("the number is zero \n", x);
    }
    return(0);
        
}