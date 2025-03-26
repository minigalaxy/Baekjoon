#include <iostream>
#include <string>

using namespace std;

int res = 0;

string word;

int main()
{
    cin >> word;

    for(int i = 0; i < word.size(); i++){
        int t = word[i] - 65;

        if(t >= 18) t--;

        res += min((t / 3) + 3, 10);
    }

    cout << res;

    return 0;
}
