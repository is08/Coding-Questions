#include<iostream>
using namespace std;

class Node{
    int data;
    Node *lchild;
    Node *rchild;

    Node(){
        data = 0;
        lchild = NULL;
        rchild = NULL;
    }

    Node(int d){
        data = d;
        lchild = NULL;
        rchild = NULL;
    }

    friend class BinaryTree;
};

class BinaryTree{

    Node *root;

    void insertNode(){
        int data;

        while(1){
            cout << "Enter data: ";
            cin >> data
            Node *newNode = new Node(data);

            if(root == NULL){
                root = newNode;
            }


        }

    }

};
