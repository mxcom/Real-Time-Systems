#include <stdio.h>
#include <time.h>
#include <stdlib.h>

double diffInSeconds(struct timespec *start, struct timespec *end);

/**
 * Do not change this function.
 * @param in
 * @return
 */
int myfunc1 (int in){
    int i, j = in;
    for(i=0; i <= 999; i++) j=j+i;
    return j;
}

/**
 * Do not change this function.
 * @param in
 * @return
 */
int myfunc2 (int in){
    int val1, i;
    float val2, val3;
    for (i =0; i < 4500; i++)
    {
        val1 = in*in*i;
        val2 = (in+i )*( in+i )*( in+i);
        val3 = val2 / val1;
    }
    return val3;
}

/**
 * Do 500,000 function calls and print out time.
 * @param argc
 * @param argv first parameter is the probability that myfunc1 is called
 * @return
 */
int main(int argc, char** argv){
    int i, randomValue;
    struct timespec start, end; // use these to save the time before and after the loop

    // handle probability argument
    char *ptr;
    double dprob = strtod(argv[1], &ptr);
    printf("myfunc1 probability: %d\n", (int)dprob);
    printf("myfunc2 probability: %d\n", 100-(int)dprob);

    // measure time for start
    clock_gettime(CLOCK_REALTIME, &start);
    printf("full-seconds: %ld, nano-seconds %ld\n", start.tv_sec, start.tv_nsec);

    for(i = 0; i < 5e5; i++){ //  e stands for exponent. 5e5 = 5 * 10^5 = 500000
        randomValue = rand();
        if((double)randomValue / RAND_MAX <= (dprob/100))
            myfunc1(randomValue);
        else
            myfunc2(randomValue-1234);
    }

    // measure time for end
    clock_gettime(CLOCK_REALTIME, &end);
    printf("full-seconds: %ld, nano-seconds %ld\n", end.tv_sec, end.tv_nsec);

    double seconds = diffInSeconds(&start, &end);
    printf("difference in seconds: %.4fs", seconds);
    return 0;
}

/**
 * calculate the time difference of the given arguments
 * The timespec structures can be set using clock_gettime
 * @return time that has passed between start and end, scaled to the unit of seconds.
 */
double diffInSeconds(struct timespec *start, struct timespec *end) {
    double time = (double)(end->tv_sec - start->tv_sec);
    time += (double)(end->tv_nsec - start->tv_nsec)/1e9;
    return time;
}
