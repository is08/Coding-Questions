#include<iostream>
using namespace std;

int main(){
    int test, m, n;
    cin >> test;

    while(test--){
        cin >> m >> n;
        int a[m], b[n];
        int visited[100000] = {0};

        for(int i = 0; i < m; i++)
            cin >> a[i];

        for(int i = 0; i < n; i++){
            cin >> b[i];
            visited[b[i]] = 1;
        }

        int count = 0;

        for(int i = 0; i < m; i++){
            if(visited[a[i]]){
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}
