#ifndef __SHELL_H__
#define __SHELL_H__


#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <string.h>
#include <errno.h>
#include <fcntl.h>


/* Execute functions */
void print_prompt(void);
char *read_input(void);
int startsWithForwardSlash(char const *str);
char *get_file_path(char *file_name);
char *get_file_loc(char *path, char *file_name);
void execute_command(char *input, char **av, char **env);
int tokenize_input(char *input, char *args[]);


/* Built in Functions */
int handle_builtin_commands(char **args,
		int num_args, char *input,
		char **env);
void print_env(char **env);
void handle_cd(char **args, int num_args);
void handle_exit(char *input, int exit_status);
int shell_exit(char **args, char *input);

/* Handle various symbols */
char *handle_comment(char *input);

#endif
