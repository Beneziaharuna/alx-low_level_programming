#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); // seed the random number generator with the current time
    int n = rand() % RAND_MAX - RAND_MAX / 2; // generate a random number between -RAND_MAX/2 and RAND_MAX/2
    
    printf("The number %d ", n);
    
    if (n > 0) {
        printf("is positive\n");
    } else if (n == 0) {
        printf("is zero\n");
    } else {
        printf("is negative\n");
    }
    
    return 0;
}


