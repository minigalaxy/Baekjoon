#include <iostream>

using namespace std;

char str[101];

int main()
{
    cin >> str;

    for(int i = 0; i < 101; i++){
        if(str[i] == 0){
            cout << i;
            break;
        }
    }

    return 0;
}
