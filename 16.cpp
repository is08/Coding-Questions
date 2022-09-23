#include<iostream>
using namespace std;

int main(){
    int len, n, flag = 0;
    cin>>len;

    while(len--){
        cin>>n;
        int i = 2;

        while(i <= (n/2)){
            if(n%i == 0){
                flag = 1;
                break;
            }
            i++;
        }

        if(flag == 1 || n == 1){
            cout<<"no"<<endl;
        }
        else{
            cout<<"yes"<<endl;
        }
    }



    return 0;
}
