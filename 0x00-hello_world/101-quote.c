#include<unistd.h>
/**
* main - prints "and that piece of art is useful" - Dora Korpar, 2015-10-19
*followed by a newline, to standard error.
* Return: 0 (Success)
*/

int main(void) {
  const char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
  write(STDERR_FILENO, msg, 59);
  return (1);
}
