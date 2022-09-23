#include<iostream>
using namespace std;

int main(){
    int num, count = 0;
    cin>>num;

    while(num > 0){
        count++;
        num = num / 10;
    }

    if(count == 1)
        cout<<"1"<<endl;
    else if(count == 2)
        cout<<"2"<<endl;
    else if(count == 3)
        cout<<"3"<<endl;
    else
        cout<<"More than 3 digits"<<endl;

    return 0;
}
