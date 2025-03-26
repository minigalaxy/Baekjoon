#include <iostream>
#include <string>

using namespace std;

string word;

int main()
{
    cin >> word;

    for(int i = 0; i < word.size() / 2; i++){
        if(word[i] != word[word.size() - i - 1]){
            cout << 0;
            return 0;
        }
    }

    cout << 1;

    return 0;
}
