/* a program to illustarte that operand of increament/decreament operatot shuold have a modifiable l-value. */

#include<stdio.h>

int main()
{
	int a;

	a=++2;

	printf("%d",a);

	return(0);
}

/* Error:Operand of increament/decreament operator should have modifiable l-value.
	 2 is constant and does't have modifiable l-value. */
