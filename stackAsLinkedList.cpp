#include<iostream>
using namespace std;

class Node{
private:
    int data;
    Node *next;

public:
    Node(int d){
        data = d;
        next = NULL;
    }

    friend class Stack;
};

class Stack{
private:
    Node *head, *top;

public:

    Stack(){
        head = NULL;
        top = NULL;
    }

    void push(int data){
        Node *newNode = new Node(data);

        if(head == NULL){
            head = newNode;
            cout << "First node inserted" << endl;
        }
        else{
            Node *curr = head;

            while(curr->next != NULL){
                curr = curr->next;
            }

            curr->next = newNode;
            top = newNode;

        }
    }

    void printStack(){
        Node *curr = head;
        cout << curr->data;
        curr = curr->next;

        while(curr != NULL){
            cout << " -> " << curr->data;
            curr = curr -> next;
        }

        cout << endl;
    }

    int topOfStack(){
        return top->data;
    }

    void pop(){
        Node *temp = head;

        while(temp->next != top){
            temp = temp->next;
        }

        Node *tempTop = top;
        top = temp;
        temp->next = NULL;

        cout << "deleting " << tempTop->data << endl;

        delete tempTop;
    }
};



int main(){

    Stack stack1;

    stack1.push(1);
    stack1.push(2);
    stack1.push(3);

    stack1.printStack();

    cout << stack1.topOfStack() << endl;

    stack1.pop();

    stack1.printStack();

    cout << stack1.topOfStack() << endl;

    return 0;
}
