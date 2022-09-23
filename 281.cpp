#include<iostream>
using namespace std;

int main(){
    int t, n;
    cin >> t;

    while(t--){
        cin >> n;
        int a, freq[11] = {0};

        for(int i = 0; i < n; i++){
            cin >> a;
            freq[a]++;
        }

        int freqofa[10001] = {0};

        //frequency of frequency array
        for(int i = 1; i <= 10; i++){
            if(freq[i])
                freqofa[freq[i]]++;
        }


        int maxFreq = -10e5, id = -1;

        for(int i = 1; i <= 10001; i++){
            if(freqofa[i] > maxFreq){
                maxFreq = freqofa[i];
                id = i;
            }
        }
        cout << id << endl;
    }

    return 0;
}
