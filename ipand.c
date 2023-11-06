#include<stdio.h>
int main()
{
	int oct[4]={192,168,50,10};
	int sub[4]={255,255,255,0};
	int fin[4];
	int i,j,k;
	
	printf("\nThe IP address is:%d.%d.%d.%d",oct[0],oct[1],oct[2],oct[3]); 
	printf("\n\nThe subnet mass is:%d.%d.%d.%d",sub[0],sub[1],sub[2],sub[3]);
	j=0;
	k=0;
	for(i=0;i<4;i++)
	{
		fin[k]=oct[i]&sub[j];
		j++;
		k++;
	}
	
		printf("\n\nThe address is:%d.%d.%d.%d",fin[0],fin[1],fin[2],fin[3]);
}
