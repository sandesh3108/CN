#include<stdio.h>
#include<math.h>

int bin(int count ,char oct1[count])
{
	int sum=0;
	int j=0,i;
	for(i=count-1;i>=0;i--)
	{
		sum+=(oct1[i]*(pow(2,j)));
		j++;
	}
	printf("ss%d",sum);
	return sum;
}
int main()
{
	char arr[17],oct1[8];
	int i,sum=0,j;
	int count=0;
	printf("Enter the ip add");
	for( i=0;i<17;i++)
	{
		scanf("%s",&arr[i]);
	}
	for(i=0;i<17;i++)
	{
		if(arr[i]!='.')
		{
		 oct1[count]=arr[i];
		 count++;
		}
		else
		{
			count=0;
		}	
	}
	printf("\n%d\n",count);
	for(i=0;i<count;i++)
	{
		printf("%c",oct1[i]);
	}
	sum=bin(count,oct1);
	

	printf("\n\ndecimal= %d",sum);

}
