#include<iostream>
using namespace std;


int main(){
    int len, i;
    cin>>len;

    while(len--){
        int num, i;
        cin>>num;

        char arr[num];

        for(i = 0; i < num; i++){
            cin>>arr[i];
        }

        int flag = 0;

        for(i = 0; i < num; i++){
            if(arr[i] == 'I'){
                flag = 2;
                break;
            }
            else if(arr[i] == 'Y'){
                flag = 1;
                break;
            }
        }

        if(flag == 0)
            cout<<"NOT SURE"<<endl;
        else if(flag == 1)
            cout<<"NOT INDIAN"<<endl;
        else if(flag == 2)
            cout<<"INDIAN"<<endl;


    }
    return 1;
}
