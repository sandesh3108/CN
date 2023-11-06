#include<stdio.h>
#include<math.h>
int main()
{
	int ip[4],i,afterop[4];
	int no;
	printf("Enter the IP address:");
	for(i=0;i<4;i++)
	{
		scanf("%d",&ip[i]);
	}
	printf("The IP address is:%d.%d.%d.%d",ip[0],ip[1],ip[2],ip[3]);
	
	if(ip[0]<=127)
	{
		int subclassA[4]={255,0,0,0};
		for(i=0;i<4;i++)
	{
		afterop[i]=ip[i] & subclassA[i];
	}
	no=pow(2,(32-8));
	ip[1]=255;
	ip[2]=255;
	ip[3]=255;
	}
	
	else if(ip[0]>=128&&ip[0]<=191)
	{
		int subclassB[4]={255,255,0,0};
		for(i=0;i<4;i++)
	{
	    afterop[i]=ip[i] & subclassB[i];
	}
	no=pow(2,(32-16));
	ip[2]=255;
	ip[3]=255;
	}
	
	else if(ip[0]>=192&&ip[0]<=223)
	{
		int subclassC[4]={255,255,255,0};
		for(i=0;i<4;i++)
	{
		afterop[i]=ip[i] & subclassC[i];
	}
	no=pow(2,(32-24));
	ip[3]=255;
	}
	else
	{
		printf("Invalid class");
	}
	printf("\n\nNumbar of address is:%d",no);
	printf("\n\nThe first address[NET Id] is:%d.%d.%d.%d",afterop[0],afterop[1],afterop[2],afterop[3]);
	printf("\n\nThe last address is:%d.%d.%d.%d",ip[0],ip[1],ip[2],ip[3]);
	
}
