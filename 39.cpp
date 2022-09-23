#include<iostream>
using namespace std;

int main(){
    int n, k;
    cin>>n>>k;

    int arr[n] = {0};



    while(k--){
        string s1;
        int num;
        cin>>s1;

        if(s1 == "CLICK"){
            cin>>num;
            if(arr[num - 1] == 0)
                arr[num - 1] = 1;
            else
                arr[num - 1] = 0;
        }
        else if (s1 == "CLOSEALL"){
            for(int i = 0; i < n; i++)
                arr[i] = 0;
        }

        int count = 0;

        for(int i = 0; i < n; i++){
            if(arr[i] == 1){
                count++;
            }
        }
        cout<<count<<endl;
    }

    return 0;
}
