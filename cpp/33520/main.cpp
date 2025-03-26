#include <iostream>

using namespace std;

int N;

long long a, b;

long long W = 0, H = 0;

int main()
{
    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> a >> b;

        if(max(W, a) * max(H, b) < max(W, b) * max(H, a)){
            W = max(W, a);
            H = max(H, b);
        } else {
            W = max(W, b);
            H = max(H, a);
        }
    }

    cout << W * H;

    return 0;
}
