#include <stdio.h>
#include "add.c"
#include "sub.c"

void main()
{
	int x,y,p,q;
	printf("Enter two numbers:")
	scanf("%d %d", &x, &y);
	p=add(x,y);
	q=sub(x,y);
}