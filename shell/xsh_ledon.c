/*
 * @file     xsh_ledon.c
 * @provides xsh_ledon
 *
 */
/* Embedded Xinu, Copyright (C) 2008.  All rights reserved. */

#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <ledctrl.h>

/**
 * Shell command (ledon).
 * @param nargs  number of arguments in args array
 * @param args   array of arguments
 * @return OK for success, SYSERR for syntax error
 */
shellcmd xsh_ledon(int nargs, char *args[])
{
	turnOn();
}
