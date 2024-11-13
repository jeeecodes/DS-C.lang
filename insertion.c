#include<stdio.h> 

void main() {
    int a[100], i, n, j, temp;

    printf("\n Enter the size of the array: ");
    scanf("%d", &n);
    printf("\n Enter the elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("\n entered array is \n");
     for(i = 0; i < n; i++) {
        printf("%d \t", a[i]);}
        for(i=1;i<n;i++){ 
            temp=a[i];
            j=i-1;
            while(j>=0 && a[j]>temp){
                a[j+1]=a[j];
                j--;

            }
            a[j+1]=temp;

        }printf("the sorted array is:\n");
        for(i=0;i<n;i++){
            printf("%d \t",a[i]);
        }
        }
