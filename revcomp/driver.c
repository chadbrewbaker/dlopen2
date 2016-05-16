
/*
 http://stackoverflow.com/questions/746171/best-algorithm-for-bit-reversal-from-msb-lsb-to-lsb-msb-in-c
 */

 #include <stdlib.h>
#include <stdio.h>
#include <time.h>


extern void reverse(unsigned int* inptr, unsigned int* outptr, int length);

int main()
{
    clock_t start, diff;
    unsigned int *ints = malloc(100000000*sizeof(unsigned int));
    unsigned int *ints2 = malloc(100000000*sizeof(unsigned int));
    for(unsigned int i = 0; i < 100000000; i++)
      ints[i] = rand();

    unsigned int *inptr = ints;
    unsigned int *outptr = ints2;
    unsigned int *endptr = ints + 100000000;
    // Starting the time measurement

    start = clock();
    // Computations to be measured

    reverse(inptr, outptr, 100000000);

    diff = clock() - start;

    int msec = diff * 1000 / CLOCKS_PER_SEC;
    printf("Time taken %d seconds %d milliseconds\n", msec/1000, msec%1000);


    free(ints);
    free(ints2);

    return 0;
}
