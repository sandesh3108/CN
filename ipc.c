#include<stdio.h>
int checkclass(int firstoct)
{
		if(firstoct>=0 && firstoct<=127)
	{
		printf("\nThe IP address belongs to class 'A'");
	}
	else if(firstoct>=128 && firstoct<=191)
	{
		printf("\nThe IP address belongs to class 'B'");
	}
	else if(firstoct>=192 && firstoct<=223)
	{
		printf("\nThe IP address belongs to class 'C'");
	}
	else if(firstoct>=224 && firstoct<=239)
	{
		printf("\nThe IP address belongs to class 'D'");
	}
	else if(firstoct>=225 && firstoct<=255)
	{
		printf("\nThe IP address belongs to class 'E'");
	}
	else
	{
		printf("\nThe IP address is invalid!!!");
	}
}
int main()
{
	char arr[15],ck[3];
	int i,j=0,k;
	int firstoct=0,ckdata[4];
	printf("Enter the valid IP address:");
	
		scanf("%s",&arr[i]);
	
	for(i=0;i<15;i++)
	{
		printf("%c",arr[i]);
	}
	j=0;
	for(i=0;i<4;i++)
	{
		if(arr[i]!='.')
		{
			ck[j]=arr[i];
			j++;
			//count++;
			//break;
		}
		else
		{
			ckdata[k]=atoi(ck);
			 
			checkclass(ckdata[k]);
		}
	}
/*	printf("\n\noctet=");
	for(j=0;j<3;j++)
	{
	printf("%c",ck[j]);
	}	
	printf("\n\nEnter the vlue for first octet:");
	scanf("%d",&firstoct);
	checkclass(firstoct);
*/
}
