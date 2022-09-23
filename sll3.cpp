//i will not use int -> no new node will be created during the execution -> node created during compilation
#include<iostream>
using namespace std;


class node{
    private:
    int data;
    node* next;

    public:
    node(){
        data = 0;
        next = NULL;
    }

    node(int n){
        data = n;
        next = NULL;
    }
    friend class sll;
};

class sll{
    private:
    node* head;

    public:
    sll(node* n){
        head = n;
    }

    sll(){
        head = NULL;
    }

    int getLength() const{

        if(head == NULL){
            return 0;
        }

        node* curr = head;
        int l = 0;

        while(curr != NULL){
            curr = curr -> next;
            ++l;
        }
        return l;
    }

    void appendNode(node* n){

        if(getLength() == 0){
            cout << "the list was empty, updating head node..." << endl;
            head = n;
        }
        else{
            node* curr = head;

            while(curr->next != NULL){
                curr = curr -> next;
            }

            curr->next = n;
        }
    }

    void printList(){
        node* curr = head;
        cout << curr->data;
        curr = curr->next;

        while(curr != NULL){
            cout << "->" << curr->data;
            curr = curr -> next;
        }
        cout << endl;
    }

    void insertNode(int k, node* n){
        node* curr = head;
        --k;

        while(--k){
            curr = curr->next;
        }

        n->next = curr->next;
        curr->next = n;
    }

    void prependNode(node* n){
        if(head == NULL){
            cout << "list was empty" << endl;
            head = n;
        }
        else{
            n->next = head;
            head = n;
        }
    }

    int searchNode(int n)const{
        node* curr = head;
        int k = 1;

        while(curr != NULL){
            if(curr->data == n){
                return k;
            }
            else{
                ++k;
                curr = curr->next;
            }
        }
        return 0;
    }

    int deleteNode(int n){
        if(searchNode(n) == 0){
            cout << "node not found in the list" << endl;
        }
        else{
            int k = searchNode(n);

            node* curr = head;
            node* temp;
            --k;
            curr = curr -> next;

            while(--k){
                temp = curr;
                curr = curr->next;
            }

            temp->next = curr->next;
            curr -> next = NULL;
        }
    }
};


int main(){
    sll linked_list;
    cout << "length is: " << linked_list.getLength() << endl;
    node* n = new node(1);
    node* n2 = new node(2);
    node* n3 = new node(3);
    node* n4 = new node(4);
    node* n5 = new node(5);
    node* n6 = new node(6);
    node* n7 = new node(7);
    sll linked_list2(n);
    cout << "length is: " << linked_list2.getLength() << endl;
    linked_list2.appendNode(n2);
    linked_list2.printList();
    linked_list2.appendNode(n3);
    linked_list2.appendNode(n4);
    //linked_list.printList();
    linked_list2.appendNode(n5);
    linked_list2.appendNode(n6);
    linked_list2.printList();
    linked_list2.insertNode(3, n7);
    linked_list2.printList();
    node* n8 = new node(8);
    linked_list2.prependNode(n8);
    linked_list2.printList();
    cout << linked_list2.searchNode(5) << endl;
    linked_list2.deleteNode(4);
    linked_list2.printList();
    cout << linked_list2.searchNode(5) << endl;
    return 0;
}
