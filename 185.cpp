#include<iostream>
using namespace std;

int main(){
    int a, m, n;
    cin >> a >> m >> n;

    int arr[a][2], mat[m][n];

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            mat[i][j] = 0;
        }
    }


    //accepting input
    for(int i = 0; i < a; i++){
        cin >> arr[i][0] >> arr[i][1];
        mat[arr[i][1]][arr[i][0]] = 1;
    }

    int input[1][2];

    cin >> input[0][0] >> input [0][1];

    int count = 0;

    for(int i = 0; i < m; i ++){
        for(int j = 0; j < n; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }


    if(mat[input[0][0] - 1][input[0][1] - 1]){
        count++;
    }
    if(mat[input[0][0] - 1][input[0][1]]){
        count++;
    }
    if(mat[input[0][0] - 1][input[0][1] + 1]){
        count++;
    }
    if(mat[input[0][0]][input[0][1] + 1]){
        count++;
    }
    if(mat[input[0][0] + 1][input[0][1] + 1]){
        count++;
    }
    if(mat[input[0][0] + 1][input[0][1]]){
        count++;
    }
    if(mat[input[0][0] + 1][input[0][1] - 1]){
        count++;
    }
    if(mat[input[0][0]][input[0][1] - 1]){
        count++;
    }

    cout << count << endl;


    return 0;
}
