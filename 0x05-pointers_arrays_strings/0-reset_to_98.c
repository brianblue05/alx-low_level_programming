#include main.h
/*
 * reset_to_98 -prints 98
 * @n - int to be used
 *
 */
int main (void)
{
	int n;
		n=100;
		int * pNew =&n;
		pNew =98;
		printf("%p \t %s \t %d \t", "The value is", &n, n);


}


