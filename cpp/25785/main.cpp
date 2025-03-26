#include <iostream>
#include <string>

using namespace std;

string s;

bool b;

bool is_vowel(char c){
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main()
{
    cin >> s;

    b = !is_vowel(s[0]);

    for(int i = 1; i < s.size(); i++){
        if(b != is_vowel(s[i])){
            cout << 0;

            return 0;
        }

        b = !b;
    }

    cout << 1;

    return 0;
}
