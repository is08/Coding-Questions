#include<iostream>
using namespace std;

class Node{
private:
    int val;
    Node *left;
    Node *right;
public:
    Node(int v){
        this->val = v;
        this->left = NULL;
        this->right = NULL;
    }

    friend class bst;
};

class bst{
private:
    Node *root;

public:
    bst(){
        this->root = NULL;
    }

    void insertNode(int v){

        Node *tempNode = new Node(v);

        if(root == NULL){
            cout << "Inserting root node " << endl;
            root = tempNode;

            cout << root->val << endl;
        }
        else{
            Node *temp = root, *parent = NULL;

            while(true){
                parent = temp;

                if(v < temp->val){
                    temp = temp->left;

                    if(temp == NULL){
                        parent->left = tempNode;
                        break;
                    }
                }
                else if(v > temp->val){
                    temp = temp->right;

                    if(temp == NULL){
                        parent->right = tempNode;
                        break;
                    }
                }

            }
        }
    }

     void displayNode(Node *temp){
        if(temp != NULL){
            displayNode(temp->left);
            cout << temp->val << " ";
            displayNode(temp->right);
        }
    }

    void display(){
        if(root == NULL){
            cout << "the tree is empty" << endl;
        }
        else{
            displayNode(root);
            cout << endl;
        }
    }

    void displayRootNode(){
        if(root == NULL){
            cout << "the tree is empty" << endl;
        }
        else{
            cout << "the value of root is " << root->val << endl;
        }
    }

    bool findNode(int v){
        Node *temp = root;

        while(temp){
            cout << "temp->val is " << temp->val << endl;

            if(v < temp->val){
                temp = temp->left;
            }
            else if(v > temp->val){
                temp = temp->right;
            }
            else if(v == temp->val){
                return true;
            }
        }
        return false;
    }

    void deleteNode(int v){

        if(v == root->val){

        }
    }

};

int main(){
    bst newbst;

    newbst.display();

    newbst.insertNode(5);
    newbst.insertNode(1);
    newbst.insertNode(0);
    newbst.insertNode(2);
    newbst.insertNode(3);
    newbst.insertNode(6);

    newbst.display();

    cout << newbst.findNode(4) << endl;

    return 0;
}
