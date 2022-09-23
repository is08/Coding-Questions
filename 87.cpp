#include<iostream>
using namespace std;

int main(){
    int test;
    cin >> test;

    while(test--){
        int n;
        cin >> n;
        int max_marks[8] = {0};

        while(n--){
            int p, s;
            cin >> p >> s;

            if(p < 9){
                max_marks[p - 1] = max(max_marks[p - 1], s);
            }
        }

        for(int i = 0; i<8; i++)
            cout<<max_marks[i]<<" ";
        cout<<endl;

        int sum = 0;
        for(int i = 0; i < 8; i++)
            sum = sum + max_marks[i];

        cout<<sum<<endl;
    }

    return 0;
}
