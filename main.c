#include <stdio.h>
#include <math.h>
#include "add.c"
#include "sub.c"
#include "power.c"

int main()
{
	int x,y,p,q,r;
    printf("Enter two numbers:");
	scanf("%d %d", &x, &y);
	p=add(x,y);
	q=sub(x,y);
    r=pow(x);
    return 0;
}
