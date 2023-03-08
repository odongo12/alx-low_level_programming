#include <stdio.h>

int main(void)
{
    int r;

    r = wildcmp("main.c", "*.c");
    printf("%d\n", r); /* expected output: 1 */

    r = wildcmp("main.c", "m*a*i*n*.*c*");
    printf("%d\n", r); /* expected output: 1 */

    r = wildcmp("main.c", "main.c");
    printf("%d\n", r); /* expected output: 1 */

    r = wildcmp("main.c", "m*c");
    printf("%d\n", r); /* expected output: 0 */

    r = wildcmp("main.c", "m.*c");
    printf("%d\n", r); /* expected output: 1 */

    r = wildcmp("main.c", "**.*c");
    printf("%d\n", r); /* expected output: 1 */

    return (0);
}
