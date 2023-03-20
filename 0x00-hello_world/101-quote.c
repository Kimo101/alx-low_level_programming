#include<unistd.h>
/**
* main - prints "and that piece of art is useful" - Dora Korpar, 2015-10-19
*followed by a newline, to standard error.
* Return: 0 (Success)
*/

int main(void) {
  char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
  write(2, msg, 38);
  return (1);
}
