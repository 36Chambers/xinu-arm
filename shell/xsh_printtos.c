/*
 * @file     xsh_printtos.c
 * @provides xsh_printtos
 *
 */
/* Embedded Xinu, Copyright (C) 2008.  All rights reserved. */

#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <lab1.h>

/**
 * Shell command (printtos).
 * @param nargs  number of arguments in args array
 * @param args   array of arguments
 * @return OK for success, SYSERR for syntax error
 */
shellcmd xsh_printtos(int nargs, char *args[])
{

    ready(create((void*)progA, 1024, 20, "progA", 2, 10, 20), RESCHED_YES);
    return OK;
}
