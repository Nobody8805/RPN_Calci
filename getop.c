#include <stdio.h>
#include <ctype.h> //for functions such as isdigit().
#include "calc.h"

int getop(char s[]) //addr of char s is passed during RUNTIME, not compile time from main when they are linked together.
{
    int i = 0; //to traverse through array
    int c; //to store chars

    while((s[0] = c = getch()) == ' ' || c == '\t' )
        ; //skipping whitespaces.
    s[1] = '\0';

    if(!isdigit(c) && c != '.')
        return c; //all the special symbols such as + and - have basically a int value, as special defined chars by the c language
    
    //collecting integer part:-
    if(isdigit(c))
        while(isdigit(s[++i] = c = getch()))
            ;

    //collecting fraction part:- 
    if(c == '.')
        while (isdigit(s[++i] = c = getch()))
            ;

    s[i] = '\0'; //Increment happens when storing characters, not when terminating strings. i points to next free space.

    if (c != EOF)
        ungetch(c);

    return NUMBER;
}
