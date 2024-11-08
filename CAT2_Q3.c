
#include<stdio.h>
int main(){
int hours;
float wages;
float gross_pay;
float taxes;
float net_pay;
printf("enter the hours worked:");
scanf("%d",&hours);
printf("enter the wages paid per hour:");
scanf("%f",&wages);
gross_pay=hours*wages;

taxes=gross_pay*0.15;
net_pay=gross_pay-taxes;

printf("gross_pay is:%f\n",gross_pay);
printf("taxes is:%f\n",taxes);
printf("net_pay is:%f\n",net_pay);
	
	return 0;
}
