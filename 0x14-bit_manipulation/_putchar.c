#include "main.h"
#include <unistd.h>

/**
 * my_putchar  write  character c to stdout
 * @ch: The character to print
 *
 * Returns: 1 on success, -1 on error
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
