#include<iostream>
using namespace std;

class node{
private:
    int data;
    node* next;
    node* prev;
public:
    node(){
        data = 0;
        next = NULL;
        prev = NULL;
    }
    node(int n){
        data = n;
        next = NULL;
        prev = NULL;
    }
    friend class dll;
};

class dll{
    node* head;
public:
    dll(){
        head = NULL;
    }
    dll(int n){
        node* new_node = new node(n);
        head = new_node;
    }

    int getLength(){

        if(head == NULL){
            return 0;
        }

        node* curr = head;
        int l = 0;

        while(curr != NULL){
            l++;
            curr = curr -> next;
        }
        return l;
    }

    void appendList(int n){
        node* new_node = new node(n);

        if(head == NULL){
            cout << "the list was empty, updating head node.." << endl;
            head = new_node;
        }
        else{
            node* curr = head;

            while(curr->next != NULL){
                curr = curr->next;
            }

            new_node->prev = curr;
            curr->next = new_node;

        }
    }

    void prependList(int n){
        node* new_node = new node(n);

        if(head == NULL){
            cout << "list is empty, updating head node..." << endl;
            head = new_node;
        }
        else{
            new_node->next = head;
            head->prev = new_node;
            head = new_node;
        }
    }

     void printList()const{
        node* curr = head;
        cout << curr->data;
        curr = curr -> next;

        while(curr != NULL){
            cout << " -> " << curr->data;
            curr = curr->next;
        }
        cout << endl;
    }

    void insertNode(int k, int n){
        node* new_node = new node(n);
        node* curr = head;
        --k;

        while(--k){
            curr = curr -> next;
        }

        new_node->next = curr->next;
        curr->next->prev = new_node;
        new_node->prev = curr;
        curr->next = new_node;
    }

    void deleteNode(int k){
        node* temp = head;
        --k;

        while(--k){

        }
    }
};

int main(){

    dll list1;
    cout << list1.getLength() << endl;

    dll list2(1);
    cout << list2.getLength() << endl;
    list2.printList();

    list2.appendList(2);
    list2.appendList(3);

    list2.printList();

    list2.prependList(10);
    list2.printList();

    list2.insertNode(2, 11);                //at 2nd position
    list2.printList();

    return 0;
}
