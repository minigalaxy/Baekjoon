#include <iostream>
#include <string>

using namespace std;

string word;

int cnt[26] = { 0, };

char res = 0;

int main()
{
    cin >> word;

    for(int i = 0; i < word.size(); i++){
        if(word[i] >= 97) cnt[word[i] - 97]++;
        else cnt[word[i] - 65]++;
    }

    for(int i = 0; i < 26; i++){
        if(cnt[i] > cnt[res]){
            res = i;
        }
    }

    for(int i = 0; i < 26; i++){
        if(i != res && cnt[i] == cnt[res]){
            cout << '?';
            return 0;
        }
    }

    res += 65;

    cout << res;

    return 0;
}
