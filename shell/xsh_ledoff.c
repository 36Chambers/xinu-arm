/*
 * @file     xsh_ledoff.c
 * @provides xsh_ledoff
 *
 */
/* Embedded Xinu, Copyright (C) 2008.  All rights reserved. */

#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <lab1.h>

/**
 * Shell command (ledoff).
 * @param nargs  number of arguments in args array
 * @param args   array of arguments
 * @return OK for success, SYSERR for syntax error
 */
shellcmd xsh_ledoff(int nargs, char *args[])
{

    turnOff();
}
