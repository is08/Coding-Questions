#include<iostream>
using namespace std;

int main(){
    int len, a, b;
    cin>>len;

    while(len>=1){
        cin>>a>>b;
        if(a > b){
            cout<<">"<<endl;
        }
        else if(a < b){
            cout<<"<"<<endl;
        }
        else if(a == b){
            cout<<"="<<endl;
        }
        len--;
    }


    return 0;
}
