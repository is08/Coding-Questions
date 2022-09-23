#include<iostream>
using namespace std;

class Node{
private:
    int val;
    Node *next;

public:
    Node(){
        val = 0;
        next = NULL;
    }
    Node(int v){
        val = v;
        next = NULL;
    }
    friend class MyLinkedList;
};


class MyLinkedList {
private:
    Node *head;

public:
    MyLinkedList() {
        head = NULL;
    }

    int lengthOfList(){
        Node *curr = head;
        int count = 0;

        while(curr != NULL){
            ++count;
            curr = curr->next;
        }

        return count;
    }

    int get(int index) {
        cout << "get\n";
        Node *temp = head;
        int length = lengthOfList();

        if(temp == NULL && index > 0){
            return -1;
        }
        else if((index + 1) > length){
            return -1;
        }
        while(index-- && temp != NULL){
            temp = temp->next;
        }


        return temp->val;
    }

    void addAtHead(int val) {
        cout << "adding at head\n";
        Node *temp = new Node(val);

        if(head == NULL){
            head = temp;
        }
        else{
            temp->next = head;
            head = temp;
        }
        //display();
    }

    void addAtTail(int val) {
        cout << "adding at tail\n";
        Node *temp = new Node(val);

        if(head == NULL){
            head = temp;
        }
        else{
            Node *curr = head;

            while(curr->next != NULL){
                curr = curr -> next;
            }

            curr->next = temp;
        }
        //display();
    }

    void addAtIndex(int index, int val) {
        cout << "Adding at index "<< index << "\n";

        int length = lengthOfList();

        if(index == 0){
            addAtHead(val);
        }
        else if(index == length){
            addAtTail(val);
        }
        else{
            if(head != NULL && index < length){
                Node *prev = NULL, *curr = head;
                Node *temp = new Node(val);

                while(index--){
                    prev = curr;
                    curr = curr->next;
                }

                prev->next = temp;
                temp->next = curr;
            }
        }
        //display();
    }

    void deleteAtIndex(int index) {
        cout << "deleting at index " << index << "\n";

        int length = lengthOfList();

        if(index == 0){
            if(length == 1){
                head = NULL;
            }
            else{
                head = head->next;
            }
        }
        else if((index + 1) < length){
            Node *prev = NULL, *curr = head;

            while(index--){
                prev = curr;
                curr = curr->next;
            }

            prev->next = curr->next;
            curr->next = NULL;
        }
        //display();
    }

    void display(){
        Node *temp = head;

        cout << temp->val;
        temp = temp->next;

        while(temp != NULL){
            cout << " -> " << temp->val;
            temp = temp->next;
        }
        cout << endl;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */


 int main(){
    MyLinkedList myLinkedList;
    myLinkedList.addAtHead(1);
    myLinkedList.display();
    myLinkedList.addAtTail(3);
    myLinkedList.display();
    myLinkedList.addAtIndex(1, 2);  // linked list becomes 1->2->3
    myLinkedList.display();
    myLinkedList.get(1);              // return 2
    myLinkedList.deleteAtIndex(1);    // now the linked list is 1->3
    myLinkedList.display();
    myLinkedList.get(1);              // return 3

    return 0;
 }
