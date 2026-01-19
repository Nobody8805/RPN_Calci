#include <stdio.h>
#include "calc.h"

#define BUFSIZE 100

char buf[BUFSIZE]; //buf array for ungetch
int bufp = 0; //next free pos in buf

int getch(void){
  return (bufp > 0) ? buf[--bufp] : getchar(); //Condition ? value_if_true : value_if_false
}
/*
if (bufp > 0)
    return buf[--bufp];
else
    return getchar();
 * */


void ungetch(int c)
{
  if(bufp >= BUFSIZE)
    printf("ungetch: too many charecters\n");
  else
   buf[bufp++] = c;
}
