#include<stdio.h>
void main(){

int n,a[100],search,i,count=0,r,l,mid,flag,t;
t=t+2;
printf("enetr the number of elemnts");
t++;
scanf("%d",&n);
t++;
printf("enetr the elemnts");
t++;
t++;
for(i=0;i<n;i++)
{t++;
 t++;
 scanf("%d",&a[i]);
 }
 printf("enetr the number to be searched");
 t++;
 scanf("%d",&search);
 t++;
 l=0;
 t++;
 r=n-1;
 t++;
 t++;
 while(l<=r){
 t++;
 mid=(l+r)/2;
 t++;
 t++;
  if(search==a[mid]){
 flag=1;
 break;
 t++;
 }
 else if (search>a[mid]){
 l=mid+1;
 }
 else if(search<a[mid]){
 r=mid-1;
 }}
 if(flag==1){
 printf("elemnt found");
 t++;}
 else{
 printf("the elemt notfound");
 t++;
 
}

printf("\n the space complexity is %d", (10*4)+(4*n));
t++;
printf("\n the time complexity is %d",t+1);
}
