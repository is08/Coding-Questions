#include<iostream>
using namespace std;

int main(){
    int l, b;
    cin>>l>>b;
    int area = l * b;
    int peri = 2 * (l + b);

    if(area > peri)
        cout<<"Area"<<endl<<area<<endl;
    else if (peri > area)
        cout<<"Peri"<<endl<<peri<<endl;
    else if (area == peri)
        cout<<"Eq"<<endl<<peri<<endl;

    return 0;
}
