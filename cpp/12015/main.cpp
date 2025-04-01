#include <iostream>

using namespace std;

int N, A;

int lis[1000001] = { 0, }, s = 0;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> A;

        if(A > lis[s]){
            lis[++s] = A;
        } else {
            *lower_bound(lis, lis + s, A) = A;
        }
    }

    cout << s;

    return 0;
}
