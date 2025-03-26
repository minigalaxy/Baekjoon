#include <iostream>

using namespace std;

int N;
int d = 1;

int main()
{
    cin >> N;
    N--;

    while(N > 0){
        N -= d * 6;
        d++;
    }

    cout << d;

    return 0;
}
