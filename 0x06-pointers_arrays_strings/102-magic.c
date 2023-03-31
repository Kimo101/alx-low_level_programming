#include <stdio.h>

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &a[2]; /* initialize p to point to the third element of a */

	*(p + 3) = 98; /* set the value of the fourth element after p to 98 */

	printf("a[2] = %d\n", a[2]); /* this should now print 98 */

	return 0;
}

