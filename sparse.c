#include<stdio.h>
void main(){
int a[10][10],b[10][3],r,c,i,j,k;
printf("enter the number of rows");
scanf("%d",&r);
printf("enter the number of columns");
scanf("%d",&c);
printf("enter the elemnts");
for(i=0;i<r;i++){
for(j=0;j<c;j++){
scanf("%d",&a[i][j]);
}}
printf("the sparse matrix is\n"); 
for(i=0;i<r;i++){
for(j=0;j<c;j++){
printf("%d \t",a[i][j]);}
printf("\n");}

k=1;
for(i=0;i<r;i++){
for(j=0;j<c;j++){
if(a[i][j]!=0){
b[k][0]=i;
b[k][1]=j;
b[k][2]=a[i][j];
k++;}
}}
b[0][0]=r;
b[0][1]=c;
b[0][2]=k-1;
printf("\nthe sparse matrix is\n");
for(i=0;i<k;i++){
for(j=0;j<3;j++){
printf("%d \t",b[i][j]);
}
printf("\n");
}}

