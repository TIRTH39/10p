#include<stdio.h>

main()
{
    int a,b,c;
    
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    
     if(a<b)
    {
    	if(a<c)
    	{
    		printf("A is min");
		}
		else
		{
			printf("C is min");
		}
	}
    else
    {
    	if(b<c)
    	{
    		printf("B is min");
		}
		else
		{
			printf("C is min");
		}
	}
}
