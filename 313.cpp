#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int testCases, n, x;
    cin >> testCases;

    while(testCases--){
        cin >> n >> x;
        int a[n], sum = 0;

        for(int i = 0; i < n; i++){
            cin >> a[i];
            sum += a[i];
        }

        if(sum < x){
            cout << "-1" << endl;
        }
        else{
            sort(a, a + n, greater<int>());
            int tempSum = 0, Count = 0, i = 0;

            while(tempSum < x){
                tempSum += a[i];
                i++;
                Count++;
            }
            cout << Count << endl;
        }
    }
    return 0;
}
