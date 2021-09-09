#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node* next;
};

void printList(node* n){
    while(n!=NULL){
        cout<<n->data<<' ';
        n=n->next;
    }
}

void deleteKey(node* n, int key){
    node* temp = n;
    node* prev = NULL;
    if(temp!=NULL && temp->data == key){
        n=temp->next;
        delete temp;
        return;
    }
    else{
        while(temp!=NULL && temp->data!=key){
            prev = temp;
            temp=temp->next;
        }
    
        if(temp==NULL){
            return;
        }
        prev->next = temp->next;
        delete temp;
    }
}

int main(){

    node* head = new node();
    node* third = new node();
    node* second = new node();
    node* fourth = new node();

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = fourth;

    fourth->data = 4;
    fourth->next = NULL;

    printList(head);
    cout<<endl;
    int key;
    cout<<"Enter key: ";
    cin>>key;

    deleteKey(head,key);
    printList(head);

}