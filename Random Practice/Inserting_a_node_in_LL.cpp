#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
};

void printList(Node* n){
    while(n!=NULL){
        cout<<n->data<<' ';
        n=n->next;
    }
}

int main(){
    
    
    Node* head = NULL;
    Node* third = NULL;
    Node* second = NULL;

    head = new Node();
    third = new Node();
    second = new Node();

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    printList(head);

    cout<<endl;

    Node* extra = new Node();
    head -> next = extra;
    extra -> data = 69;
    extra -> next = second;

    printList(head);

    return 0;
}