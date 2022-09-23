#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string top, bottom;
        cin >> top;
        cin >> bottom;

        if((top[0] == 'b' || bottom[0] == 'b') && (top[1] == 'o' || bottom[1] == 'o') && (top[2] == 'b' || bottom[2] == 'b')){
            cout << "yes" << endl;
        }
        else if((top[0] == 'o' || bottom[0] == 'o') && (top[1] == 'b' || bottom[1] == 'b') && (top[2] == 'b' || bottom[2] == 'b')){
            cout << "yes" << endl;
        }
        else if((top[0] == 'b' || bottom[0] == 'b') && (top[1] == 'b' || bottom[1] == 'b') && (top[2] == 'o' || bottom[2] == 'o')){
            cout << "yes" << endl;
        }
        else{
            cout << "no" << endl;
        }
    }
    return 0;
}
