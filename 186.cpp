#include<iostream>
using namespace std;

int main(){
    int a, m , n;
    cin >> a >> m >> n;

    int arr[a][2], mat[m][n], new_mat[m][n];

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            mat[i][j] = 0;
            new_mat[i][j] = 999;
        }
    }

    for(int i = 0; i < a; i++){
        cin >> arr[i][0] >> arr[i][1];
        mat[arr[i][0]][arr[i][1]] = -1;
    }

    //cout << int("*") << endl;

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(mat[i][j] == -1){
                if(i - 1 >= 0 && j - 1 >= 0 &&  mat[i - 1][j - 1] != -1){
                    mat[i - 1][j - 1]++;
                }
                if(i - 1 >= 0 && mat[i - 1][j] != -1){
                    mat[i - 1][j]++;
                }
                if(i - 1 >= 0 && j + 1 < n && mat[i - 1][j + 1] != -1){
                    mat[i - 1][j + 1]++;
                }
                if(j + 1 < n && mat[i][j + 1] != -1){
                    mat[i][j + 1]++;
                }
                if(i + 1 < m && j + 1 < n && mat[i + 1][j + 1] != -1){
                    mat[i + 1][j + 1]++;
                }
                if(i + 1 < m && mat[i + 1][j] != -1){
                    mat[i + 1][j]++;
                }
                if(i + 1 < m && j - 1 >= 0 && mat[i + 1][j - 1] != -1){
                    mat[i + 1][j - 1]++;
                }
                if(j - 1 >= 0 && mat[i][j - 1] != -1){
                    mat[i][j - 1]++;
                }
            }
        }
    }

    int input[2];
    cin >> input[0] >> input[1];

    if(mat[input[0]][input[1]] == -1){
        cout << "BOOM" << endl;
    }
    else if(mat[input[0]][input[1]] > 0){
        new_mat[input[0]][input[1]] = mat[input[0]][input[1]];

        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                cout << new_mat[i][j] << " ";
            }
            cout << endl;
        }
    }
    else if(mat[input[0]][input[1]] == 0){
        new_mat[input[0]][input[1]] = mat[input[0]][input[1]];

        while(mat[input[0] - 1][input[1] - 1] == 0 && input[0] - 1 >= 0 && input[1] - 1 >= 0){
            new_mat[input[0] - 1][input[1] - 1] = mat[input[0] - 1][input[1] - 1];
            cout << "a";
        }

        while(mat[input[0] - 1][input[1]] == 0 && input[0] - 1 >= 0){
            new_mat[input[0] - 1][input[1]] = mat[input[0] - 1][input[1]];
            cout << "b";
        }

        while(mat[input[0] - 1][input[1] + 1] == 0 && input[0] - 1 >= 0 && input[1] + 1 < n){
            new_mat[input[0] - 1][input[1] + 1] = mat[input[0] - 1][input[1] + 1];
            cout << "C";
        }

        while(mat[input[0]][input[1] + 1] == 0 && input[1] + 1 < n){
            new_mat[input[0]][input[1] + 1] = mat[input[0]][input[1] + 1];
            cout << "d";
        }

        while(mat[input[0] + 1][input[1] + 1] == 0 && input[0] + 1 < m && input[1] + 1 < n){
            new_mat[input[0] + 1][input[1] + 1] = mat[input[0] + 1][input[1] + 1];
            cout << "e";
        }

        while(mat[input[0] + 1][input[1]] == 0 && input[0] + 1 < m ){
            new_mat[input[0] + 1][input[1]] = mat[input[0] + 1][input[1]];
            cout << "f";
        }

        while(mat[input[0] + 1][input[1] - 1] == 0 && input[0] + 1 < m && input[1] - 1 >= 0){
            new_mat[input[0] + 1][input[1] - 1] = mat[input[0] + 1][input[1] - 1];
            cout << "g";
        }

        while(mat[input[0]][input[1] - 1] == 0 && input[1] - 1 >= 0){
            new_mat[input[0]][input[1] - 1] = mat[input[0]][input[1] - 1];
            cout << "h";
        }

        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                cout << new_mat[i][j] << " ";
            }
            cout << endl;
        }


    }


    return 0;
}
