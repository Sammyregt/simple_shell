#ifndef __SHELL_H__
#define __SHELL_H__


#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <string.h>


/* Execute functions */
void print_prompt(void);
char *read_input(void);
int startsWithForwardSlash(char const *str);
char *get_file_path(char *file_name);
char *get_file_loc(char *path, char *file_name);
void execute_command(char *input, char **av);
int tokenize_input(char *input, char *args[]);

#endif 
