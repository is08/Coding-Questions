#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int maxval = a[0];          //maximum
    int secmax = 0;             //second maximum
    for(int i = 0; i<n; i++){
        if(maxval < a[i]){
            secmax = maxval;
            maxval = a[i];
        }
        else if(maxval > a[i] && secmax < a[i]){
            secmax = a[i];
        }
        //cout << "maxval " << maxval << " and secmax " << secmax << endl;
    }

    cout << secmax << endl;

    return 0;
}
