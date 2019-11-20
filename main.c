#include <stdio.h>
#include <stdlib.h>
int foo(int x)
{
	int y = x%2==0 ? x+2 : x + 1;
	return y;
}
int main(int argc, char* argv[])
{
	
	int x = atoi(argv[1]);	
	printf("\nFirst (odd or even) param num_[%d] on Git Project!!!!!\n\n", foo(x));
	int x = atoi(argv[2]);	
	printf("\nFirst (odd or even) param num_[%d] on Git Project!!!!!\n\n", foo(x));
	return 0;
}
