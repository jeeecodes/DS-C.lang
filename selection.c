#include<stdio.h>
void main()
{
 int a[100],i,n,j,min,temp,t;
 t++;
 printf("enter the size of array");
 t++;
 scanf("%d",&n);
 t++;
 printf("enter the elemnts");
 t++;
 for(i=0;i<n;i++){
 t++;
 scanf("%d",&a[i]);
 t++;
 }
 t++;
 t++;
 for(i=0;i<n-1;i++)
 {
 min=i;
 t++;
 t++;
 for(j=i+1;j<n;j++)
 {t++;
 t++;
 if(a[j]<a[min]){
  min=j;
  }
  }
  if(min!=i){
   temp=a[i];
   a[i]=a[min];
   a[min]=temp;
 }}
 
 printf("the sorted array is \n");
 t++;
 t++;
 for(i=0;i<n;i++)
 {t++;
 printf("%d \t",a[i]);}
 
 printf("\n");
 t++;
 printf("\n the space complexity is %d",(7*4)+(4*n));
 t++;
 printf("\n the time complexity is %d",t+1);
 }
