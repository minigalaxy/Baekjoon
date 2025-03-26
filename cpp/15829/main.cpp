#include <iostream>
#include <string>

using namespace std;

int L;

string s;

uint64_t r = 0;

int main()
{
    cin >> L >> s;

    for(int i = 0; i < L; i++){
        uint64_t t = int(s[i]) - 96;
        for(int j = 0; j < i; j++){
            t = (t * 31) % 1234567891;
        }
        r = (r + t) % 1234567891;
    }

    cout << r;

    return 0;
}
