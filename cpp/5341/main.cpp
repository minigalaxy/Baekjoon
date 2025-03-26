#include <iostream>

using namespace std;

int n;

int main()
{
    while(true){
        cin >> n;

        if(n == 0) break;

        cout << n * (n + 1) / 2 << '\n';
    }
    return 0;
}
