#include <iostream>

using namespace std;

int n;

string word;

int w;

string dict[10'000];

string res;

int main()
{
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> word;

        cin >> w;

        for(int j = 0; j < w; j++) cin >> dict[j];
        
        int res[2] = { 0, word.size() };

        for(int j = 0; j < w; j++){
            int d = 0;
            
            for(int k = 0; k < word.size(); k++){
                if(word[k] != dict[j][k]) d++;
            }
            
            if(d < res[1]){
                res[1] = d;
                res[0] = j;
            }
        }

        cout << dict[res[0]] << '\n';
    }

    return 0;
}
