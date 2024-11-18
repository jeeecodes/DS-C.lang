#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*link;
}*temp,*head=NULL,*ptr,*ptr2,*poin;
int item;
void insertion_at_begining();
void insertion_at_end();
void insertion_at_anypoint();
void print();
void deletion_at_begining();
void deletion_at_end();
void deletion_at_anypoint();
void insertion_at_begining(){
    temp=(struct node*)malloc(sizeof(struct node));
    if(temp==NULL){
        printf("overflow");
    } printf("enter the data to be inserted:");
        scanf("%d",&item);
     if(head==NULL){
        temp->link=NULL;
        temp->data=item;
        head=temp;
        printf("%d",temp->data);
        printf("->%p\n",temp->link);
    
    }else{
        temp->link=head;
        temp->data=item;
        head=temp;
        printf("%d",temp->data);
        printf("->%p\n",head->link);
    }
} void insertion_at_end(){
      temp=(struct node*)malloc(sizeof(struct node));
    if(temp==NULL){
        printf("overflow");
        return;
    }
     printf("enter the data to be inserted at end:");
        scanf("%d",&item);
         temp->link=NULL;
        temp->data=item;
     if(head==NULL){
        head=temp;
        printf("%d",temp->data);
        printf("->%p\n",temp->link);
    }else{
        ptr=head;
         while(ptr->link!=NULL){
            ptr=ptr->link;
        }
        ptr->link=temp;
        printf("%d",temp->data);
        printf("->%p\n",temp->link);
    }
} void insertion_at_anypoint(){
    int posi;
    struct node*p;
    temp=(struct node*)malloc(sizeof(struct node));
     if(temp==NULL){
        printf("overflow");
        return;
    } 
    printf("enter the data to be inserted:");
    scanf("%d",&item);
     if(head==NULL){
         temp->link=NULL;
        temp->data=item;
        head=temp;
        printf("%d",temp->data);
        printf("->%p\n",temp->link);
    }else{
         printf("enter the position of the node(value of data in left: )");
    scanf("%d",&posi);
    ptr=head;
    while(ptr!=NULL&&ptr->data!=posi){
        ptr=ptr->link;
    } if(ptr==NULL){
        printf("the node with data value %d not found",posi);
        free(temp);
        return;
    } else{
    temp->data=item;
    temp->link=ptr->link;
    ptr->link=temp;
    printf("%d is inserted after %d",temp->data,posi);}
}} void deletion_at_begining(){
if(head==NULL){
    printf("linkedlist unerflow\n");
    return;
} 
 ptr=head;
   if(head->link==NULL){
         head=NULL;
          printf("the deleted element is %d\n",ptr->data);
           free(ptr);
    }
  else{
  ptr=head;
  head=head->link;
  printf("the deleted element is %d\n ",ptr->data);
  free(ptr);
 }} void deletion_at_end(){
    if(head==NULL){
        printf("LinkedList underflow\n");
    }
    ptr=head;
    if(ptr->link==NULL){
        head=NULL;
        printf("deleted elemnt is %d",ptr->data);
        free(ptr);


    }
     else{
        ptr=head;
        ptr2=ptr->link;
        while(ptr2->link!=NULL){
            ptr=ptr->link;
            ptr2=ptr2->link;
        } printf("the deleted element is %d\n",ptr2->data);
        free(ptr2);
        ptr->link=NULL;
    }
 }void deletion_at_anypoint(){
     if(head==NULL){
    printf("linkedlist unerflow\n");
}
ptr=head;
  if(ptr->link==NULL){
      head=NULL;
      printf("the deleted element is %d\n",ptr->data);
      free(ptr);
 } else{
    int value;
    printf("enter the value of the data to be deleted");
    scanf("%d",&value);
    ptr=head;
    ptr2=ptr->link;
    while(ptr2!=NULL&&ptr2->data!=value){
        ptr=ptr->link;
        ptr2=ptr2->link;
    } ptr->link=ptr2->link;
    free(ptr2);
 }

 }
 

 void print(){
    if(head==NULL){
        printf("the linked list is empty\n");
    } else{
 printf("the linked list is:\n");
 poin=head;
    while(poin!=NULL){
        printf("->%d",poin->data);
         poin=poin->link;
    }
}}
 void main(){
    int v;
    int choice,choice1;
    
    
    do{
       printf("enter your choice\n");
       printf("1:INSERTION AT BEGINNING\n");
       printf("2:INNSERTION AT END\n");
       printf("3:INSERTION AT RANDOM\n");
        printf("4:DELETION AT FRONT\n");
        printf("5:DELETION AT END \n");
        printf("6:DELETION AT RANDOM POSITION\n");
        printf("7:DISPLAY\n");
        printf("8:EXIT\n");
        scanf(" %d",&v);
            switch(v){
            case 1:insertion_at_begining();
            break;
            case 2: insertion_at_end();
            break;
            case 3:insertion_at_anypoint();
            break;
             case 4: deletion_at_begining();
            break;
            case 5: deletion_at_end();
            break;
            case 6: deletion_at_anypoint();
            break;
            case 7:
            print();
            break;
            case 8:
            printf("exiting\n");
            break;
            default:printf("enter a valid option\n");
            }}while(v!=8);}
   
