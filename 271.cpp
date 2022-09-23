#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t, n;
    cin >> t;

    while(t--){
        cin >> n;
        int a[n], freq[1001] = {0}, freq2[1001] = {0}, flag = 0, visited[1001] = {0};

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        for(int i = 0; i < n; i++){
            freq[a[i]]++;
        }

        for(int i = 0; i < 1001; i++){
            freq2[freq[i]]++;
        }

        for(int i = 1; i < n; i++){
            if(freq2[i] > 1){
                flag = 1;
                break;
            }
        }

        if(flag == 0){

            visited[a[0]] = 1;

            for(int i = 1; i < n; i++){
                if(a[i] == a[i - 1])
                    continue;
                if(visited[a[i]]==1){
	                flag=1;
	                break;
	            }

	            visited[a[i]]=1;
            }
        }



        if(flag == 1){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
}
