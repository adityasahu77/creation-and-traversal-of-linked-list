#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node*next;
};


 void linkedlisttraversal(struct Node*ptr){

    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    printf("\n");
 }
int main(int argc, char const *argv[])
{
    struct Node*head;
    struct Node*second;
    struct Node*third;
    struct Node*fourth;
    head=(struct Node*)malloc(sizeof(struct Node));

    second=(struct Node*)malloc(sizeof(struct Node));

    third=(struct Node*)malloc(sizeof(struct Node));

    fourth=(struct Node*)malloc(sizeof(struct Node));
//link head to second node
head->data=1;
head->next=second;
//link second to third node
second->data=5;
second->next=third;
//link third to fourth node
third->data=14;
third->next=fourth;
//terminate the linked list
fourth->data=17;
fourth->next=NULL;

linkedlisttraversal(head);


    return 0;
}
