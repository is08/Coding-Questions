#include<iostream>
#define MAX 1000                //max size of stack
using namespace std;

class stackUsingArray{
    int top;

public:
    int arr[MAX];

    stackUsingArray(){
        top = -1;
    }

    int getTop(){
        return top;
    }

    bool isEmpty(){
        if(top == -1){
            cout << "stack is empty" << endl;
            return true;
        }
        return false;
    }

    int pop(){
        if(isEmpty()){
                return 0;
        }
        int val = arr[top];
        top--;
        return val;
    }

    bool push(int val){
        if(top == MAX - 1){
            cout << "stack is full" << endl;
            return false;
        }
        arr[++top] = val;
        return true;
    }

    int peek(){
        return arr[top];
    }
};


int main(){
    stackUsingArray s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(50);

    cout << "popped: " << s1.pop() << endl;
    cout << "top element is: " << s1.peek() << endl;

    cout << "elements in the stack are-> \n";
    while(!s1.isEmpty()){
        cout << s1.peek() << " ";
        s1.pop();
    }

    return 0;
}
