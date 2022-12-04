#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node*next;
};
void push(struct Node ** head,int data)
{
    struct Node* ptr1=((struct Node*)malloc(sizeof(struct Node));
    struct Node* temp= *head;
    ptr1->data=data;
    ptr1->next=*head;
    if(*head!=NULL){
        while (temp->next!=*head)
        temp=temnp->next;
        temp->next=ptr1;
    }
    else
    ptr1->next=ptr1;
    *head=ptr1;
}
void deleteNode(Node* head,Node* del)
{
    struct Node
}