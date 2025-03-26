#include <iostream>

using namespace std;

string word[5];

int main()
{
    for(int i = 0; i < 5; i++) cin >> word[i];

    for(int i = 0; i < 15; i++){
        for(int j = 0; j < 5; j++){
            if(word[j].size() > i){
                cout << word[j][i];
            }
        }
    }

    return 0;
}
