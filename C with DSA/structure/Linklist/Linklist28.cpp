#include<bits/stdc++.h> 
using namespace std; 
struct Node 
{ 
    char data;
    struct Node *next; 
}; 
Node *newNode(char key) 
{ 
    Node *temp = new Node;
    temp->data = key; 
    temp->next = NULL; 
    return temp; 
}
void printlist(Node *head)
{ 
    if (! head) 
    {
        cout << "Empty List";
        return; 
    }
    while (head != NULL) 
    {
        cout << head->data << " "; 
        if (head->next)
        cout << "-> ";
        head = head->next; 
    }
    cout << endl; 
}
bool isVowel(char x)
{
    return (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u'); 
}
Node *arrange(Node *head)
{
    Node *newHead = head;
    Node *latestVowel;
    Node *curr = head;
    if (head == NULL)
    return NULL;
    if (isVowel(head->data))
    latestVowel = head;
    else
    {
        while (curr->next != NULL && !isVowel(curr->next->data))
        curr = curr->next;
        if (curr->next == NULL)
        return head; 
        latestVowel = newHead = curr->next; 
        curr->next = curr->next->next; 
        latestVowel->next = head; 
    }
    while (curr != NULL && curr->next != NULL) 
    {
        if (isVowel(curr->next->data)) 
        { 
            if (curr == latestVowel) 
            { 
                latestVowel = curr = curr->next; 
            } 
            else
            { 
  
                Node *temp = latestVowel->next; 
                latestVowel->next = curr->next;
                latestVowel = latestVowel->next;
                curr->next = curr->next->next;
                latestVowel->next = temp; 
            } 
        } 
        else
        {
            curr = curr->next; 
        } 
    } 
    return newHead; 
}
int main() 
{
    Node *head = newNode('a'); 
    head->next = newNode('b'); 
    head->next->next = newNode('c'); 
    head->next->next->next = newNode('e'); 
    head->next->next->next->next = newNode('d'); 
    head->next->next->next->next->next = newNode('o'); 
    head->next->next->next->next->next->next = newNode('x'); 
    head->next->next->next->next->next->next->next = newNode('i');  
    printf("Linked list before :"); 
    printlist(head);
    head = arrange(head);
    printf("Linked list after :"); 
    printlist(head); 
    return 0;
}

