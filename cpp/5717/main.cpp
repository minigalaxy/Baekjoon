#include <iostream>

using namespace std;

int m, f;

int main()
{
    while(true){
        cin >> m >> f;

        if(m == 0 && f == 0) break;

        cout << m + f << '\n';
    }
    return 0;
}
