#include <unistd.h>
<<<<<<< HEAD
=======

>>>>>>> 77a6c9fb42759b1defbb3c1d0e73b895af033ca6
/**
* _putchar - writes the character c to std out.
* @c: the character to print
* Return: 1 on success.
* on error, -1
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
