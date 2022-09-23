#include<iostream>
using namespace std;

int main(){
    int t, x1, y1, x2, y2;
    cin >> t;

    while(t--){
        cin >> x1 >> y1 >> x2 >> y2;

        int matrix[1001][1001];
        int k=0;
        for(int i=0;i<1001;i++){
            k = k + i + 1;
            matrix[i][0] = k;
            for(int j = 1; j < 1001; j++){
                matrix[i][j] += matrix[i][j - 1] + j + i;

            }
        }

        int maximumCost = 0;

        for(int i = x1; i<=x2; i++){
            cout << matrix[i][y1] << endl;
            maximumCost += matrix[i][y1];
        }



        for(int i = y1; i <= y2; i++){
            cout << matrix[x2][i] << endl;
            maximumCost += matrix[x2][i];
        }

        cout << maximumCost << endl;


    }

    return 0;
}
