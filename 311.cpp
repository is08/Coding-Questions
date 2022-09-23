#include<iostream>
using namespace std;

int main(){
    int t, n;
    cin >> t;

    while(t--){
        cin >> n;
        int a[n];

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        int minimum = -10e5, val = 0;


        for(int i = 0; i < n; i++){
            int Count = 1;
            for(int j = i + 2; j < n; j++){
                if(a[i] == a[j]){
                    Count++;
                    j++;
                }
            }
            if(Count > minimum){
                minimum = Count;
                val = a[i];
                //cout << "Count updated: " << Count << endl;
                //cout << "New val is: " << val << endl;
            }
            else if(Count == minimum){
                if(a[i] < val){
                    val = a[i];
                    //cout << "Updated val is: " << val << endl;
                }
            }
        }
        cout << val << endl;
    }
    return 0;
}
