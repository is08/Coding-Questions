#include<iostream>
#include<math.h>
using namespace std;


int main(){
    int test, r;
    int x1, y1, x2, y2, x3, y3, count = 0;
    cin>>test;

    while(test--){
        cin>>r;
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        count = 0;

        double d1 = sqrt((pow(x1 - x2, 2)) + (pow(y1 - y2, 2)));
        double d2 = sqrt((pow(x1 - x3, 2)) + (pow(y1 - y3, 2)));
        double d3 = sqrt((pow(x3 - x2, 2)) + (pow(y3 - y2, 2)));

        if (d1 <= r)
            count++;
        if (d2 <= r)
            count++;
        if (d3 <= r)
            count++;

        if (count >= 2)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }

    return 0;
}
