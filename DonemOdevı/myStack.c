#include "myStack.h"

void create_stack(mystack *st) {
    st->top = -1;
}

int is_full(mystack *st) {
    if (st->top == 8)
        return 1;
    return 0;
}

int is_empty(mystack *st) {
    if (st->top == -1)
        return 1;
    return 0;
}

int push(int played, mystack *st) {
    if (is_full(st))
        return 0;
    else {
        st->turn[st->top] = played;
        st->top++;
        print_stack(st);
    }
    return 1;
}

int pop(mystack *st) {
    if (is_empty(st)) {
        return -1;
    }
    else {
        st->top--;
        print_stack(st);
    }
    return 1;
}

void print_stack(mystack *st) {
    for (int i = 0; i < st->top; i++) {
        printf("%d -> ", st->turn[i]);
    }
}