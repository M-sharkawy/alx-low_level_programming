#include <stdlib.h>
#include "main.h"

/**
 * write a function that concatenates all the arguments of your program.
 * Prototype: char *argstostr(int ac, char **av);
 * Returns NULL if ac == 0 or av == NULL
 * Returns a pointer to a new string, or NULL if it fails
 * Each argument should be followed by a \n in the new string
*/

char *argstostr(int ac, char **av)
{
    int i;

    if (ac == 0 || av == NULL)
    {
        return(NULL);
    }

    for (i = 0; i < av; i++)
    {
        av[i] += av[i];
    }

    char * str = (int *)malloc(ac * sizeof(int));
    if (str == 0)
    {
        return(NULL);
    }
    printf("%s\n", av)
    return(str);
}
