#include "func.h"

/**
 * builtin_execute - executes the built-in functions
 * @tokens: arguments being passed
 * Return: 1 on success, otherwise the exit status
 */
int builtin_execute(char **tokens)
{
    int status;
    unsigned int length;
    unsigned int num;
    unsigned int i;

    built_s builtin[] = {
        {"exit", shell_exit},
        {"env", shell_env},
        {NULL, NULL}
    };

    if (tokens[0] == NULL)
        return 1;

    length = _strlen(tokens[0]);

    num = shell_num_builtins(builtin);
    for (i = 0; i < num; i++)
    {
        if (_strcmp(tokens[0], builtin[i].name, length) == 0)
        {
            status = (builtin[i].p)();
            return status;
        }
    }

    return 1;
}

/**
 * shell_num_builtins - returns the number of built-in commands
 * @builtin: array of built-in commands
 * Return: number of built-in commands
 */
int shell_num_builtins(built_s builtin[])
{
    unsigned int i = 0;

    while (builtin[i].name != NULL)
        i++;

    return i;
}

