#include <iostream>
#include <algorithm>

using namespace std;

int N, L;

int h[1000];

int main()
{
    cin >> N >> L;

    for(int i = 0; i < N; i++) cin >> h[i];

    sort(h, h + N);

    for(int i = 0; i < N; i++){
        if(L >= h[i]) L++;
        else break;
    }

    cout << L;

    return 0;
}
