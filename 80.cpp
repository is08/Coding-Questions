#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int test;
    cin >> test;

    while(test--){
        int n, v1, v2;
        cin >> n >> v1 >>v2;

        int stairs_time = (n * sqrt(2)) / v1;
        int ele_time = 2 * n / v2;

        if(stairs_time > ele_time)
            cout<<"Elevator"<<endl;
        else
            cout<<"Stairs"<<endl;

    }

    return 0;
}
