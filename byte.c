#include<stdio.h>
int main()
{
	int iarr[8],farr[24],fix[8]={0,1,1,1,1,1,1,0};
	int i,j;
	
	printf("Entre the input array:");
	for(i=0;i<8;i++)
	{
		scanf("%d",&iarr[i]);
	}
	printf("\nThe input array is:");
		for(i=0;i<8;i++)
	{
		printf("%d",iarr[i]);
	}
	j=8;
	for(i=0;i<8;i++)
	{
		farr[j]=iarr[i];
		j++;
	}
	
	for(i=0;i<8;i++)
	{
		farr[i]=fix[i];
	}
	j=16;
	for(i=0;i<8;i++)
	{
		farr[j]=fix[i];
		j++;
	}
	
	printf("\n\n The final array is :");
	for(j=0;j<24;j++)
	{
		printf("%d",farr[j]);
	}
}
