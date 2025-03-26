#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;

vector<int> l;

int main()
{
    cin >> N;

    for(int i = 0; i < N; i++){
        int t;
        cin >> t;

        l.push_back(t);
    }

    sort(l.begin(), l.end());

    for(int i = 0; i < N; i++) cout << l[i] << '\n';

    return 0;
}
