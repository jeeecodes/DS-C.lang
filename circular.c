#include <stdio.h>
void enqueue();
void dequeue();
void disply();
int front=-1,rear=-1,m,item;
int a[100];
void main()
{
   int n;
   printf("Enter the size of queue:");
   scanf("%d",&m);
   printf("1:enqueue\n");
   printf("2:dequeue\n");
   printf("3:display\n");
   printf("4:Exit\n");
   while(n!=4)
   {
      printf("\n Enter your choice\n ");
      scanf("%d",&n);
      switch(n)
      {
          case 1:enqueue();
                 break;
          case 2:dequeue();
                 break;
          case 3:disply();
                 break;
          case 4:printf("exited.....:)");
                 break;
      }
   }
   
}
void enqueue(){
if(front==((rear+1)%m)){
    printf("overflow\n"); }
   else if(front==-1 && rear==-1){
        front++;
        rear++;
        printf("Enter the value=");
        scanf("%d",&a[rear]);}
    else{
      rear=(rear+1)%m;
        printf("Enter the value=\n");
        scanf("%d",&a[rear]);}}
void dequeue(){
    if(front==-1 && rear==-1){
        printf("underflow\n");}
    else if(front==rear){
        item=a[front];
        front=-1;
        rear=-1;
        printf("The deleded value is %d\n ",item);}
    else{
        item=a[front];
        front=(front+1)%m;
        printf("value deleted is  %d",item);}
   
}
void disply()
{    
    if(front==-1 && rear==-1)
    {
        printf("The queue is empty");
    }
    else
    {
       for(int i=front;i<=rear;i++)
    {
        printf("%d \t",a[i]);
    }
    }
   
}
