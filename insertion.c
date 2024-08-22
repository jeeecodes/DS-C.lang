#include<stdio.h>
void main()
{
 int n,a[100],i,j,temp,t;
 t++;
 printf("enetr the size of arrray");
 t++;
 scanf("%d",&n);
 t++;
 printf("enter theb elmnts");
 t++;
 t++;
 for(i=0;i<n;i++){
 t++;
 t++;
 scanf("%d",&a[i]);
 }
 t++;
 for(i=1;i<n;i++){
 t++;
 t++;
 temp=a[i];
 j=i-1;
 t++;
 while(j>=0 && a[j]>temp)
 {
 t++;
  a[j+1]=a[j];
  j--;
  }
  a[j+1]=temp;}
  
  printf("the sorted array is" );
  t++;
  for(i=0;i<n;i++){
   t++;
   t++;
   printf("%d \t",a[i]);
   }
   t++;
   printf("\n");
   t++;
   printf("\n the space comlexity is %d",(4*n)+(4*6));
   t++;
   printf("\nthe time complexity is %d",t+1);
   }
