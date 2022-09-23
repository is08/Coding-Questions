#include<iostream>
using namespace std;

int main(){
int lines;
cin>>lines;

int arr[lines][2];

int i, j;

for(i = 0; i<lines; i++){
    for(j=0; j<2; j++){
        cin>>arr[i][j];
    }
}

for(i = 0; i<lines; i++){
    int sum = 0;
    for(j=0; j<2; j++){
        sum = sum + arr[i][j];
    }
    cout<<sum<<endl;
}


return 0;
}
