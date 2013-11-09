#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a[] = {1,2,3,4,5};
	
	int i;
	int r;
	int tmp;
	srand(time(NULL));
	
	for(i = 0; i < 5; i++)
	{	
		r = rand()%5+1;
		tmp = a[r];
		a[r] = a[i];
		a[i] = tmp;
	}
	
	for(i = 0; i < 5; i++)
	{
		printf("%d ",a[i]);
	}
	
	return 0;
}