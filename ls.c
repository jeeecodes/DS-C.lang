#include<stdio.h>
void main(){

int a[50],n,i,key,flag,count=0,c=0;
c=c+2;
printf("enter the size of array");
c++;
scanf("%d",&n);
c++;
printf("enter the elemnts");
c++;
for(i=0;i<n;i++){
  c++;
  scanf("%d",&a[i]);
  c++;}
c++;
printf("enter the elemts to be searched");
c++;
scanf("%d",&key);
c++;
for(i=0;i<n;i++)
  {
   c++;
   c++;
   if(a[i]==key){
    flag=1;
    count++;}
    else{ 
      flag=0;
     }}
 c++;   
 c++;
 if(flag==1){
 printf("the elemnt is found at %d position",i);
 c++;}
  else{ 
  printf("elemnt not found");
  c++;}
  printf("\n the elemnt repeated %d times",count);
  c++;
 printf("\n space complexity= %d",(n*4)+(6*4));
 c++;
 printf("\n time compkexity=%d",c+1);
 }

