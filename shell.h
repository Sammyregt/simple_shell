#ifndef _SHELL_H_
#define _SHELL_H_

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <dirent.h>
#include <limits.h>
#include <sys/wait.h>
#include <sys/types.h>

extern char **environ;

int pid(void);
char*show_input(void);
void prompt(void);
char *_strcat(char *src);
int _strlen(char *str);
void place(char *str);
char *findfile(char *command);
int compare(char *s1, char *s2);
int _strcmpdir(char *s1, char *s2);
int charput(char c);
char *str_concat(char *s1, char *s2);
int lookforslash(char *cmd);
int compareExit(char *s1, char *s2);
int compareEnv(char *s1, char *s2);
void execute_proc(char **cmd);
char **identify_string(char *parameter);
void controlC(int sig);
char *find_command(char *command);


#endif
