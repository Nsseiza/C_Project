#include <stdio.h>
#include <stdlib.h>
int foo(int x)
{
	
	return x-1;
}
int main(int argc, char* argv[])
{
	
	int x = atoi(argv[1]);	
	printf("\nFirst C project_[%d] on Git Project!!!!!\n\n", foo(x));
	return 0;
}
