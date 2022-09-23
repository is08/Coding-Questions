#include<iostream>
using namespace std;


class Node{

private:
    int data;
    Node* next;

public:

    Node(){
        this->data = 0;
        this->next = NULL;
    }

    Node(int data){
        this->data = data;
        this->next = NULL;
    }

    friend class SinglyLinkedList;
};

class SinglyLinkedList{
    Node* head;
    int lengthOfList;

public:

    SinglyLinkedList(int data){
        Node* temp = new Node(data);
        head = temp;
        lengthOfList = 1;
    }

    void getLengthOfList(){
        cout << "length is " << lengthOfList << endl;
    }

    void printList(){
        Node* temp = head;
        cout << temp->data ;
        temp = temp->next;

        while(temp != NULL){
            cout << " -> " << temp->data;
            temp = temp->next;
        }
        cout << endl;
    }

    void insertAtHead(int data){
        Node* newNode = new Node(data);
        newNode -> next = head;
        head = newNode;
        lengthOfList++;
    }

    void insertAtTail(int data){
        Node* newNode = new Node(data);
        Node* temp = head;

        while(temp->next != NULL){
            temp = temp -> next;
        }

        temp->next = newNode;


        temp = head;

        lengthOfList++;
    }

    void insertAtPosition(int position, int data){      //after position
        Node* newNode = new Node(data);
        Node* temp = head;
        position--;

        if(temp == NULL){
            cout << "Linked List empty";
            head = newNode;
        }
        else{
            while(position--){
                temp = temp->next;
            }

            newNode->next = temp->next;
            temp->next = newNode;
        }
        lengthOfList++;
    }

    void deleteFronPosition(int position){
        Node* temp = head;
        position--;

        if(temp == NULL){
            cout << "Linked List empty";
        }
        else{
            Node* parent = temp;
            temp = temp -> next;

            while(position--){
                parent = temp;
                temp = temp -> next;
            }

            parent->next = temp->next;
            temp->next = NULL;
        }
    }
};


int main(){
    SinglyLinkedList listOne = SinglyLinkedList(1);
    listOne.getLengthOfList();
    listOne.printList();

    listOne.insertAtTail(2);
    listOne.insertAtTail(3);
    listOne.insertAtHead(0);
    listOne.getLengthOfList();
    listOne.printList();

    listOne.insertAtPosition(2, 4);
    listOne.printList();

    listOne.deleteFronPosition(2);
    listOne.printList();

    return 0;
}
