#include <iostream>
#include <string>
#include <set>

using namespace std;

int T;

string letter_bank;
string word;

int letter[26];

int main()
{
    cin >> T;

    for(int i = 0; i < T; i++){
        fill(letter, letter + 26, 0);

        cin >> letter_bank >> word;

        bool f = false;

        for(int j = 0; j < letter_bank.size(); j++) letter[letter_bank[j] - 'A'] = 1;

        for(int j = 0; j < word.size(); j++){
            if(letter[word[j] - 'A'] == 1) letter[word[j] - 'A'] = 2;
            else if(letter[word[j] - 'A'] == 0) letter[word[j] - 'A'] = -1;

        }

        for(int j = 0; j < 26; j++){
            if(letter[j] == 1 || letter[j] == -1){
                f = true;
                break;
            }
        }

        if(f) cout << "NO\n";
        else cout << "YES\n";
    }

    return 0;
}
