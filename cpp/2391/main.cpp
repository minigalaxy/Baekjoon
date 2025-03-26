#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int n;

string word;

int w;

vector<string> dict;

string res;

int main()
{
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> word;

        cin >> w;

        int eval = -1;

        for(int j = 0; j < w; j++){
            string t;
            cin >> t;

            dict.push_back(t);
        }

        sort(dict.begin(), dict.end());

        for(int j = 0; j < w; j++){
            int t = 0;

            for(int k = 0; k < word.size(); k++){
                if(word[k] == dict[j][k]) t++;
            }

            if(t > eval){
                eval = t;
                res = dict[j];
            }
        }

        cout << res << '\n';
    }

    return 0;
}
