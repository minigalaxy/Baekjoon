#include <iostream>

using namespace std;

int N;
int r = -1;

int main()
{
    cin >> N;

    for(int i = 0; i < 15; i += 3){
        if(N - i < 0) break;

        if((N - i) % 5 == 0){
            r = (N - i) / 5 + i / 3;
            break;
        }
    }

    cout << r;

    return 0;
}
