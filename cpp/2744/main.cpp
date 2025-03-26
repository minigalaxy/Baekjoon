#include <iostream>

using namespace std;

char str[101];

int main()
{
    cin >> str;

    for(int i = 0; i < 101; i++){
        if(str[i] == 0) break;

        if(str[i] <= 90) cout << char(str[i] + 32);
        else cout << char(str[i] - 32);


    }

    return 0;
}
