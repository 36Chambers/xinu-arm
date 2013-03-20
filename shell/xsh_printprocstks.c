/*
 * @file     xsh_printprocstks.c
 * @provides xsh_printprocstks
 *
 */
/* Embedded Xinu, Copyright (C) 2008.  All rights reserved. */

#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <lab1.h>

/**
 * Shell command (printprocstks).
 * @param nargs  number of arguments in args array
 * @param args   array of arguments
 * @return OK for success, SYSERR for syntax error
 */
shellcmd xsh_printprocstks(int nargs, char *args[])
{
    int child1 = create((void*)progA, 1024, 20, "progA-1", 1, 1);
    int child2 = create((void*)progA, 1024, 20, "progA-2", 1, 1);
    int child3 = create((void*)progA, 1024, 20, "progA-3", 1, 1);
    sleep(10);
    
    ready(child1, RESCHED_YES);
    ready(child2, RESCHED_YES);
    ready(child3, RESCHED_YES);
    
    return OK;
}
