#include <iostream>
#include <deque>

using namespace std;

int T;

int X;

deque<int> D;

int main()
{
    cin >> T;

    for(int i = 0; i < T; i++){
        cin >> X;

        D.clear();

        int t = X;

        while(t > 0){
            D.push_front(t & 1);
            t = t >> 1;
        }

        int l = 0, r = 0, d = 1, s = D.size();

        while(D.size() > 1){
            l += D.front() * d;
            r += D.back() * d;

            D.pop_front();
            D.pop_back();

            d = d << 1;
        }

        d = d >> 1;

        if(s % 2 == 0) cout << min(abs(l - r), (1 << (s / 2)) + r - l) << '\n';
        else cout << abs(l - r) << '\n';
    }

    return 0;
}
