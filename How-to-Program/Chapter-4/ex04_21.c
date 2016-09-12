// Counter controlled repetition with the for statement
#include <stdio.h>

int main (void) {

        unsigned int counter = 1;  // define counter

        // initialization, repetition condition and increment
        // are all included in the for statement header
        for (; counter <= 10; ++counter) {
                printf("%u\n", counter);
        } // end for
} // end main

