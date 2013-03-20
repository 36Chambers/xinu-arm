/*
 * @file progA.c
 * Implementation of a simple program
 *
 */

#include <stddef.h>
#include <thread.h>
#include <lab1.h>

/**
 * Program Entry Point
 *
 * @param argc      Number of arguments
 * @param argv      Array of arguments
 *
 * @return Some integer from a random math equation?
 */
int progA(int argc, char** argv) {
    
    if (argc == 1) {
        printprocstks(thrcurrent);
    } else {
        register int i asm("sp");
        int stack = i;
        printtos(stack);
        funcA(132);
    }
    
    return OK;
}

int funcA(int n) {
    register int i asm("sp");
    int stack = i;
    printtos(stack);
    return (n * 832 - 121 + 2);
}

