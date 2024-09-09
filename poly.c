#include<stdio.h>
struct polynomial
{
    int coeff;
    int expo;
}poly[20];
void main(){
    int i,n;
    printf("enter the number of terms");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter the coefficient and exponent of %d th term",i+1);
        scanf("%d%d",&poly[i].coeff,&poly[i].expo);

    }
printf("the poynomial is \n");
for(i=0;i<n;i++){
    printf("(%dx^%d)",poly[i].coeff,poly[i].expo);
    if(i<n-1){
    printf("+");
}


}
}