#include <iostream>
#include <cmath>

using namespace std;

int N;
int T, P;

double n[6];

int r = 0;

int main()
{
    cin >> N;

    for(int i = 0; i < 6; i++){
        cin >> n[i];
    }

    cin >> T >> P;

    for(int i = 0; i < 6; i++){
        r += ceil(n[i] / T);
    }

    cout << r << endl << N / P << ' ' << N % P;

    return 0;
}
