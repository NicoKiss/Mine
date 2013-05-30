#include <stdio.h>
int add(int a,int b)
{
	return a+b;
}
int minus(int a,int b)
{
	return  a-b;
}
int main(int argc,char *argv[])
{
	int a=1,b=2;
	printf("Hello \n");
	printf("Second\n");
	printf("%d",add(a,b));
	return 0;
}
