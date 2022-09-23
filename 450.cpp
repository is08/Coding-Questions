#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_set>
using namespace std;

int main(){
    int t, n;
    cin >> t;

    while(t--){
        cin >> n;
        vector<int> chapter(n);
        unordered_set<int> chapterSet;

        for(int i = 0; i < n; i++){
            cin >> chapter[i];
            chapterSet.insert(chapter[i]);
        }

        if(chapter.size() != chapterSet.size()){
            cout << "no\n";
        }
        else{
            vector<int> sortedChapter = chapter;
            sort(sortedChapter.begin(), sortedChapter.end());
            int same = 0, flag = 0;

            for(int i = 0; i < n; i++){
                if(sortedChapter[i] == chapter[i]){
                    same++;
                }

                if(chapter[i] > n){
                    flag = 1;
                    break;
                }
            }
            if(same == n || flag == 1){
                cout << "no\n";
            }
            else{
                cout << "yes\n";
            }
        }


    }

    return 0;
}
