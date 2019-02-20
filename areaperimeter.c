#include<stdio.h>
void main()
{
	int length,breadth,perimeter,area;
	printf("enter the length and breadth:");
	scanf("%d %d",&length,&breadth);
	area=length*breadth;
	perimeter=2*(length+breadth);
	if(area>perimeter)
		printf("area of rectangle is greater than perimeter");
	else
		printf("perimeter of rectangle is greater than area");
}
