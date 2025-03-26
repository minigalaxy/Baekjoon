#include <iostream>
#include <string>

using namespace std;

int N;

string S;

int res = 0;

int main()
{
    cin >> N >> S;

    for(char c: S){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') res++;
    }

    cout << res;

    return 0;
}
