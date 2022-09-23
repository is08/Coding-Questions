#include<iostream>
using namespace std;

int main(){

    int len, price;
    cin>>len;
    int arr[] = {1, 2, 5, 10, 50, 100};

    while(len--){
        cin>>price;
        int count = 0, i= 5;
        while(price>0){
                count = count + price / arr[i];
                price = price % arr[i];
                i--;
        }
        cout<<count<<endl;
    }



    return 0;
}
