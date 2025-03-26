#include <iostream>
#include <set>

using namespace std;

int a, b;

set<int> A;

int res = 0;

int main()
{
    cin >> a >> b;

    for(int i = 0; i < a; i++){
        int t;
        cin >> t;

        A.insert(t);
    }

    res = a + b;

    for(int i = 0; i < b; i++){
        int t;
        cin >> t;

        if(A.find(t) != A.end()) res -= 2;
    }

    cout << res;

    return 0;
}
