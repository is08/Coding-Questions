#include<iostream>
using namespace std;

class node{
private:
    int data;
    node* next;
friend class sll;
};

class sll{
private:
    node* first;
public:
    sll(){first = 0;}
    ~sll(){}
    //if first is empty, then the single linked list is empty
    bool isEmpty() const {return first == 0;}
    //get the length of linked list or number of nodes
    int getLength() const;
    //find the kth node and store information from that node in x
    bool Find(int k, int x) const;
    //search the linked list for node->data = x
    int Search(int x) const;
};

int sll::getLength()const{
    node* current = first;
    int length = 0;

    while(current){
        length++;
        current = current -> next;
    }

    return length;
}

bool sll::Find(int k, int x)const{
    node* current = first;

    for(int i = 1; i <= k; i++){
        current = current -> next;
    }

    if(current){
        x = current->data;
        return true;
    }
    else{
        return false;
    }
}

int sll::Search(int x)const{
    node* current = first;
    int pos = 1;

    while(current && current->data != x){
        current = current->next;
        pos++;
    }
    if(current)
        return pos;
    else
        return 0;
}
