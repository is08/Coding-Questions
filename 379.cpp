#include<iostream>
using namespace std;

int main(){
    int t, n, k;
    cin >> t;

    while(t--){
        cin >> n >> k;
        int a, votes[n]= {0};

        for(int i = 0; i < n; i++){
            cin >> a;

            if(a != (i + 1)){
                votes[a-1]++;
            }
        }

        int sizeOfStudentBody = 0;

        for(int i = 0; i < n; i++){
            if(votes[i] >= k){
                sizeOfStudentBody++;
            }
        }

        cout << sizeOfStudentBody << endl;
    }

    return 0;
}
