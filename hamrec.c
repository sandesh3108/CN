#include<stdio.h>
int main()
{
	int rec[11]={0,1,1,1,0,0,0,0,1,0,1},i,x;
	
	rec[0]=rec[0]^rec[2]^rec[4]^rec[6]^rec[8]^rec[10];
	rec[1]=rec[1]^rec[2]^rec[5]^rec[6]^rec[9]^rec[10];
	rec[3]=rec[3]^rec[4]^rec[5]^rec[6];
	rec[7]=rec[7]^rec[8]^rec[9]^rec[10];
	x=rec[0]+(rec[1]*2)+(rec[3]*4)+(rec[7]*8);
	
	if (x == 0) {
        printf("No error while transmission of data\n");
    }
    else {
        printf("\nError on position %d", x-1);

        printf("\nData received : ");
        for(i = 0; i < 11; i++) {
            printf("%d",rec[i]);
        }

        printf("\nCorrect message is\n");

        if(rec[x-1] == 0) {
            rec[x-1] = 1;
        } else {
            rec[x-1] = 0;
        }

        for (i = 0; i < 11; i++) {
            printf("%d",rec[i]);
        }
    }

    return 0;
}
