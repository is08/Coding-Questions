#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int test;
    cin >> test;

    while(test--){
        int n, root, count = 0;
        cin >> n;

        while(n > 0){
            root = int(sqrt(n));
            n = n - root*root;
            count++;
        }

        cout<<count<<endl;
    }

    return 0;
}
