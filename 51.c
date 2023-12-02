#include<stdio.h> 
#include<string.h> 

#define N strlen(divisor) 

char data[28]; 
char check_value[28]; 
char divisor[10]; 

int data_length,i,j; 

void XOR()
{ 
   for(j = 1;j < N; j++) 
   check_value[j] = (( check_value[j] ==divisor[j])?'0':'1'); 
} 

void receiver()
{ 
   printf("Enter the received data: "); 
   scanf("%s", data); 
   printf("\n-----------------------------\n"); 
   printf("Data received: %s", data); 
  void crc(); 
   for(i=0;(i<N-1) && (check_value[i]!='1');i++); 
       if(i<N-1) 
           printf("\nNo Error detected\n\n"); 
       else 
           printf("\n error detected\n\n"); 
} 

void crc(){ 
   for(i=0;i<N;i++) 
       check_value[i]=data[i]; 
   do{ 
       if(check_value[0]=='1') 
           XOR(); 
       for(j=0;j<N-1;j++) 
           check_value[j]=check_value[j+1]; 
        check_value[j]=data[i++]; 
   }while(i<=data_length+N-1); 
} 

int main() 
{ 
   printf("\nEnter data to be transmitted: "); 
   scanf("%s",data); 
   printf("\n Enter the Generating polynomial: "); 
   scanf("%s",divisor); 
   
   data_length=strlen(data); 
   
   for(i=data_length;i<data_length+N-1;i++) 
       data[i]='0'; 
       
   printf("\n----------------------------------------"); 
   printf("\n Data padded with n-1 zeros : %s",data); 
   
   printf("\n----------------------------------------"); 
   crc(); 
   
   printf("\nCRC or Check value is : %s",check_value); 
   
   for(i=data_length;i<data_length+N-1;i++) 
       data[i]=check_value[i-data_length]; 
   printf("\n----------------------------------------");
    
   printf("\n Final data to be sent : %s",data); 
   printf("\n----------------------------------------\n"); 
   receiver(); 
   return 0; 
} 
