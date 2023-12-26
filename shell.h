#ifndef __SHELL_H__
#define __SHELL_H__


#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>


/* Execute functions */
void print_prompt(void);
char *read_input(void);

#endif 
