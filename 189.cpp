#include<iostream>
using namespace std;

int main(){
    int m, n;
    cin >> m >> n;
    int arr[m][n];

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    int row = 0, col = 0;

    while(row < m && col < n){
        for(int i = col; i < n; i++){
            cout << arr[row][i] << " ";
        }

        row++;

        for(int i = row; i < m; i++){
            cout << arr[i][n - 1] << " ";
        }

        n--;

        if (row < m) {
            for (int i = n - 1; i >= col; --i) {
                cout << arr[m - 1][i] << " ";
            }
            m--;
        }

        if (col < n) {
            for (int i = m - 1; i >= row; --i) {
                cout << arr[i][col] << " ";
            }
            col++;
        }
    }




    return 0;
}
