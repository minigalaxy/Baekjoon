#include <iostream>

using namespace std;

int K;

int n;

int s, f;

int si, fi, ri;

int main()
{
    cin >> K;

    for(int i = 0; i < K; i++){
        int sum = 0;

        cin >> n >> s >> f;

        for(int j = 0; j < n; j++){
            cin >> si >> fi >> ri;

            si = max(si, s);
            fi = min(fi, f);

            if(fi >= si) sum += (fi - si + 1) * ri;
        }

        cout << "Data Set " << i + 1 << ":\n" << sum << "\n\n";
    }

    return 0;
}
