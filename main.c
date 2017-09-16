#include <stdio.h>
#include<math.h>
#include "add.c"
#include "sub.c"
#include "power.c"
#include "fact.c"

int main()
{
		int a,b;
		scanf("%d %d",&a,&b);
		int res;
		printf("Add %d Sub %d Power %d Fact %d",add(a,b),sub(a,b),power(a),fact(a));
		return 0;
}
