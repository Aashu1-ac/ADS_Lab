#include <bits/stdc++.h>
using namespace std; 

class Node 
{
    public:
    int info;
    Node* next;
    Node(int data){
        info=data;
        next=NULL;
    }
};
Node *front, *rear;
bool isEmpty(){
    return front==NULL;
}

void traverse(){
    if (front==NULL){
        cout<<"Empty Queue";
        return;
    }
    Nodee *temp=front;
    while(temp!=NULL){
        cout<<temp->info<<" ";
    }
}