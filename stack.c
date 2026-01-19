#include <stdio.h>
#include "calc.h"

#define MAXVAL 100

int sp = 0; //points to the next FREE stack position, not the current one!
double val[MAXVAL];

void push(double f){
    if(sp < MAXVAL)
        val[sp++] = f;
    else 
        printf("error: Stack Overflow.\n");
}

double pop(void){
    if(sp > 0)
        return val[--sp];
    else{
        printf("error: Stack Underflow.\n");
        return 0.0;
    }
}


