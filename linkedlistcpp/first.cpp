#include<bits/stdc++.h>

using namespace std;

class node{

    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next =NULL;
    }
};


void insert(node* &head,int val){

    node* n = new node(val);
    if(head==NULL){
        head = n;
        return;
    }
    node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = n;

}


void deleteAthead(node* &head){
    node* todelete = head;

    head = head->next;
    delete todelete;

}

void deletetion(node* &head,int val){

    if(head==NULL){
        return;
    }

    if(head->next==NULL){
        deleteAthead(head);
        return;
    }

    node* temp = head;

    while(temp->next->data!=val){
        temp = temp->next;
    }
    node* todelete = temp->next;
    temp->next = temp->next->next;

    delete todelete;
}

// node* reverse(node* &head){

//     node* Pre  = NULL;
//     node* cur = head;
//     node* nextp;

//     while(cur!=NULL){
//         nextp = cur->next;
//         cur->next = Pre;

//         Pre = cur;
//         cur=nextp;
//     }

//     return Pre;

// }


node* reverserec(node* &head){

    if(head==NULL || head->next==NULL){
        return head;
    }

    node* newhead = reverserec(head->next);

    head->next->next = head;
    head->next = NULL;

    return newhead;
}



void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;

    }
}

int main(){

    node* head = NULL;
    insert(head,1);
    insert(head,3);
    insert(head,4);
    insert(head,5);
    // deletetion(head,4);
    //deleteAthead(head);
    display(head);
    cout<<endl;
    node* newhead = reverserec(head);
    display(newhead);
    return 0;


}