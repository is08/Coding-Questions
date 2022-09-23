#include<iostream>
using namespace std;

class node{
private:
    int data;
    node* next;
public:
    node(){
        this->data = 0;
        this->next = NULL;
    }
    node(int d){
        this->data = d;
        this->next = NULL;
    }
    friend class sll;
};

class sll{
public:
    node* head;

    sll(){
        head = NULL;
    }

    sll(node* n){
        head = n;
    }

    int getLength() const{
        node* curr = head;
       // cout << curr->data <<endl;
        int l = 0;

        while(curr){
            ++l;
            curr = curr -> next;
        }
        return l;
    }

    void appendNode(int n){

        if(head == NULL){
             node* new_node = new node(n);
             head = new_node;
        }
        else{
            node* curr = head;

            while(curr->next != NULL){
                curr = curr ->next;
            }

            node* new_node = new node(n);
            curr->next = new_node;
            new_node->next = NULL;
        }
    }

    void prepentNode(int n){

        if(head == NULL){
            node* new_node = new node(n);
            head = new_node;
        }
        else{
            node* new_node = new node(n);
            new_node -> next = head;
            head = new_node;
        }
    }

    int searchForNode(int n){
        node* curr = head;
        int Count = 1;

        while(curr != NULL){
            if(curr->data == n){
                return Count;
            }
            curr = curr -> next;
            Count++;
        }
        return 0;
    }

    //insert node at kth position
    void insertNode(int n, int k){
        node* curr = head;
        --k;

        while(--k){
            curr = curr->next;
        }

        node* new_node = new node(n);
        new_node->next = curr->next;
        curr->next = new_node;

    }

    void print_list() const{
        node* curr = head;

        cout << curr->data;
        curr = curr->next;

        while(curr){
            cout << "->" << curr->data;
            curr = curr ->next;
        }
        cout << endl;
    }

    void deleteNode(int n){
        int k = searchForNode(n);
        //cout << "k is " << k << endl;
        node* curr = head;
        node* temp;

        while(--k){
            temp = curr;
            curr = curr->next;
        }

        temp -> next = curr->next;
        curr->next = NULL;

    }

    void updateNode(int k, int n){
        node* curr = head;

        while(--k){
            curr = curr -> next;
        }

        curr->data = n;
    }
};

int main(){
    sll linked_list;
    cout << linked_list.getLength() << endl;
    linked_list.appendNode(5);
    linked_list.appendNode(6);
    linked_list.appendNode(7);
    linked_list.appendNode(8);
    cout << linked_list.getLength() << endl;
    linked_list.print_list();
    linked_list.prepentNode(9);
    linked_list.print_list();
    cout << linked_list.searchForNode(10) << endl;
    linked_list.insertNode(10, 4);
    linked_list.print_list();
    cout << linked_list.searchForNode(10) << endl;
    linked_list.deleteNode(7);
    linked_list.print_list();
    linked_list.updateNode(3, 11);
    linked_list.print_list();
}
