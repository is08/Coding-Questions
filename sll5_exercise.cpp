#include<iostream>
using namespace std;


class Node{
    int data;
    Node *next;

    Node(){
        this->data = 0;
        this->next = NULL;
    }

    Node(int data){
        this->data = data;
        this->next = NULL;
    }

    friend class sll;
};

class sll{
    Node *head;

public:
    sll(){
        head = NULL;
    }

    void insertNewNodeAtEnd(int data){
        Node *newNode = new Node(data);

        if(head == NULL){
            head = newNode;
        }
        else{
            Node* curr = head;

            while(curr->next != NULL){
                curr = curr->next;
            }

            curr->next = newNode;
        }
    }

    void printList(){
        Node *curr = head;

        cout << curr->data;
        curr = curr->next;

        while(curr != NULL){
            cout << "->" << curr->data;
            curr = curr->next;
        }
        cout << endl;
    }

    void reverseList(){
        Node *curr = head, *next = NULL, *prev = NULL;

        while(curr->next != NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        curr->next = prev;
        head = curr;
    }

    void lengthOfList(){
        Node *curr = head;
        int len = 0;

        while(curr != NULL){
            len++;
            curr = curr->next;
        }

        cout << "number of nodes is " << len << endl;
    }

    void insertNodeAtASpecificPosition(int data, int pos){      //at pos
        Node *curr = head, *prev = NULL;
        --pos;
        Node *newNode = new Node(data);

        while(pos--){
            prev = curr;
            curr = curr->next;
        }

        prev->next = newNode;
        newNode->next = curr;
    }

    void deleteHeadNode(){
        Node *temp = head;
        head = head->next;

        delete temp;
    }

    void deleteNodeAtASpecificPosition(int pos){
        Node *curr = head, *prev = NULL;
        --pos;

        while(pos--){
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;
        curr->next = NULL;

        delete curr;
    }

    void deleteNodeFromEnd(){
        Node *curr = head, *prev = NULL;

        while(curr->next != NULL){
            prev = curr;
            curr = curr->next;
        }

        prev->next = NULL;

        delete curr;
    }

    void searchForNode(int data){
        Node *curr = head;
        int pos = 1, flag = 0;

        while(curr != NULL){
            if(curr->data == data){
                flag = 1;
                break;
            }
            pos++;
            curr = curr->next;
        }

        if(flag == 1){
            cout << "node found at pos: " << pos << endl;
        }
        else{
            cout << "node not found" << endl;
        }
    }

};


int main(){
    sll linkedList;

    linkedList.insertNewNodeAtEnd(1);
    linkedList.insertNewNodeAtEnd(2);
    linkedList.insertNewNodeAtEnd(4);
    linkedList.insertNewNodeAtEnd(5);
    linkedList.insertNewNodeAtEnd(6);
    linkedList.insertNewNodeAtEnd(7);

    linkedList.printList();
    linkedList.reverseList();
    linkedList.printList();
    linkedList.reverseList();
    linkedList.printList();

    linkedList.lengthOfList();

    linkedList.insertNodeAtASpecificPosition(3, 3);
    linkedList.printList();

    linkedList.deleteHeadNode();
    linkedList.printList();

    linkedList.deleteHeadNode();
    linkedList.printList();

    linkedList.deleteNodeAtASpecificPosition(3);
    linkedList.printList();

    linkedList.deleteNodeFromEnd();
    linkedList.printList();

    linkedList.searchForNode(4);
    linkedList.searchForNode(9);

    return 0;
}
