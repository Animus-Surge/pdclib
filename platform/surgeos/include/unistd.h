/**
 * SurgeOS unistd.h
 */

#ifndef _PDCLIB_UNISTD_H
#define _PDCLIB_UNISTD_H _PDCLIB_UNISTD_H

#include "pdclib/_PDCLIB_config.h"

typedef unsigned long int pid_t; // Process ID type
typedef long int intptr_t; // Pointer to an integer type

int execv(const char*, char* const[]);
int execve(const char*, char* const[], char* const[]);
int execvp(const char*, char* const[]);

pid_t fork(void);
pid_t getpid(void);

#endif // _PDCLIB_UNISTD_H
