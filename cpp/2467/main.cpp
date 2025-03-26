#include <iostream>

using namespace std;

int N;

int ph[100000];

int res[2] = { 0, 1 };

int l, r;

int main()
{
    cin >> N;

    for(int i = 0; i < N; i++) cin >> ph[i];

    l = 0;
    r = N - 1;

    while(l < r){
        if(abs(ph[l] + ph[r]) < abs(ph[res[0]] + ph[res[1]])){
            res[0] = l;
            res[1] = r;
        }

        if(abs(ph[l]) > abs(ph[r])) l++;
        else r--;
    }

    cout << ph[res[0]] << ' ' << ph[res[1]];

    return 0;
}
