#include<iostream>
#include<map>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;

        int a, votes[100];

        for(int i = 1; i <= 100; i++){
            votes[i] = 0;
        }

        for(int i = 1; i <= n; i++){
            cin >> a;

            if(i == a){
                votes[a] = -100;
            }
            else{
                votes[a]++;
            }
        }

        int sizeOfStudentBody = 0;

        for(int i = 1; i <= 100; i++){
            if(votes[i] >= k){
                sizeOfStudentBody++;
            }
        }

        cout << sizeOfStudentBody << endl;

    }
    return 0;
}
