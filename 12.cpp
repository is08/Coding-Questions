#include<iostream>
#include<math.h>
using namespace std;



int main(){


    int len, p;
    cin>>len;
    int arr[] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048};

    while(len--){
        cin>>p;
        int i =11, count = 0;
        while(p>0){
            count = count + p / arr[i];
            p = p % arr[i];
            i--;
        }
        cout<<count<<endl;

    }



    return 0;
}
