#include <stdio.h>
#include <openssl/ssl.h>
#include <openssl/rand.h>
int main(int argc, char **argv)
{
	int nRand = 0;

	RAND_bytes((unsigned char *)&nRand, 1);
	printf("Random number is %d\n", nRand);

	return 0;
}