#ifndef MYSTACK
#define MYSTACK
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
# define BUG 0

typedef struct mystack_s {
    int turn[9];
    int top;

} mystack;

void create_stack(mystack *);
int is_full(mystack *);
int is_empty(mystack *);

int push(int , mystack *);
int pop(mystack *);
void print_stack(mystack *);

#endif