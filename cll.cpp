#include<iostream>
using namespace std;

class Node{
    int data;
    Node* next;

    Node(){
        data = 0;
        next = NULL;
    }

    Node(int d){
        data = d;
        next = NULL;
    }
    friend class cll;
};

class cll{
    Node* head;
    Node* tail;
    int length = 0;

public:
    cll(int d){
        Node* newNode = new Node(d);

        head = newNode;
        tail = newNode;
        newNode->next = head;
        length++;
    }

    void insertAtHead(int d){
        Node* newNode = new Node(d);

        newNode->next = head;
        tail->next = newNode;
        head = newNode;
        length++;
    }

    void insertAtTail(int d){
        Node* newNode = new Node(d);

        tail->next = newNode;
        newNode->next = head;
        tail = newNode;
        length++;
    }


    void insertAtASpecificPosition(int d, int k){
        Node* newNode = new Node(d);
        Node* temp = head;
        k--;

        while(k > 0){
            temp = temp->next;
            k--;
        }

        newNode->next = temp->next;
        temp->next = newNode;
        length++;
    }

    void deleteFromASpecificPosition(int k){
        if(k == 1){
            head = head->next;
            tail->next = head;
        }
        else{
            Node* temp = head;
            Node* parent = head;
            k--;

            while(k > 0){
                parent = temp;
                temp = temp->next;
                k--;
            }

            parent->next = temp->next;
            temp->next = NULL;
        }
        length--;
    }

    void printList(){
        Node* temp = head;

        cout << temp->data;
        temp = temp->next;

        while(temp != head){
            cout << "->" << temp->data;
            temp = temp->next;
        }

        cout << endl;
    }

    int getLength(){
        return length;
    }
};

int main(){
    cll newList = cll(1);
    newList.printList();

    newList.insertAtHead(0);
    newList.insertAtHead(-1);
    newList.insertAtHead(-2);
    newList.printList();

    newList.insertAtTail(2);
    newList.insertAtTail(3);
    newList.printList();

    newList.insertAtASpecificPosition(9, 3);            //after kth node -> after 3rd node -> at 4th position
    newList.printList();

    newList.deleteFromASpecificPosition(4);         //deleting 4th node
    newList.printList();

    newList.deleteFromASpecificPosition(1);
    newList.printList();
    newList.deleteFromASpecificPosition(1);
    newList.printList();

    return 0;
}
