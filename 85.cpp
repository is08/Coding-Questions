#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int test;
    cin >> test;

    while(test--){
        int n;
        cin >> n;

        int a[n];
        int b[n];
        int result[n];

        for(int i = 0; i < n; i++)
            cin >> a[i];

        for(int i = 0; i < n; i++)
            cin >> b[i];

        for(int i = 0; i < n; i++){
            int temp = (a[i] * 20) - (b[i] * 10);

            if(temp <= 0)
                result[i] = 0;
            else
                result[i] = temp;
        }

        sort(result, result + n);
        cout<<result[n -1]<<endl;

    }

    return 0;
}
