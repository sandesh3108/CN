#include<stdio.h>
int main()
{
int i,j,c[7],fin[12],sum;	
printf("Enter the Data:\n");
for(i=0;i<7;i++)
{
	scanf("%d",&c[i]);
}

printf("The Dataword is :");
for(i=0;i<7;i++)
{
	printf("%d",c[i]);
}

printf("\n\n");
j=0;
i=0;

while(j<11)
	{
	  if(j==0 || j==1 || j==3 || j==7)
	 {
		fin[j]=0;
		j++;
	 }
	  else
	   {
	
		 fin[j]=c[i];	
		 j++;
		 i++;	
	   }
    }
printf("\n\nThe bits recive at reciver is:");
for(j=0;j<11;j++)
{
	printf("%d",fin[j]);
}

while(j<11)
{
    if(fin[0]==1||fin[1]==1||fin[3]==1||fin[7]==1)
    {
        j++;
       sum=sum+j;
       // j--;
    }
}
printf("\nsum=%d",sum);
}
