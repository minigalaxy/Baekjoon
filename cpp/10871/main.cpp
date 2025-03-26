#include <iostream>
#include <vector>

using namespace std;

int N, X;
vector<int> A;

int main()
{
    cin >> N >> X;

    for(int i = 0; i < N; i++){
        int a;
        cin >> a;

        if(a < X) A.push_back(a);
    }

    for(int a: A) cout << a << ' ';

    return 0;
}
