#include<stdio.h>
int maiin()
{
int year;
print("enter the year");
scanf("%d",&year);
if(year%4==0 && year%100!=0){
printf("leap year",year);
}
else{
printf("not leap year",year);
}
return 0;
}