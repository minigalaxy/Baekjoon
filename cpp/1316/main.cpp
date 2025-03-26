#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int N;

string word;

bool checked[26] = { false, };

int res = 0;

int main()
{
    cin >> N;

    for(int i = 0; i < N; i++){
        fill(checked, checked + 26, false);

        cin >> word;

        for(int i = 0, tmp = -1; i < word.size(); i++){
            if(word[i] != tmp){
                if(checked[word[i] - 97]){
                    res--;
                    break;
                } else checked[word[i] - 97] = true;

                tmp = word[i];
            }
        }

        res++;
    }

    cout << res;

    return 0;
}
