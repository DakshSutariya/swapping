#include <stdio.h>

main()

{
	int a,b,c;
	
	printf("value of A=");
	scanf("%d",&a);
	
	printf("value of B=");
	scanf("%d",&b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("swapping value A=%d & B=%d",a,b);
	
	
	}
