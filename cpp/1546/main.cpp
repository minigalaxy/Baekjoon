#include <iostream>

using namespace std;

int N;
int M = 0;
double s[1000];

int main()
{
    cin >> N;

    for(int i = 0; i < N; i++){
        int t;
        cin >> t;

        if(t > M) M = t;

        s[i] = t;
    }

    cout.precision(10);

    double t = 0;

    for(int i = 0; i < N; i++) t += (s[i] / M) * 100;

    cout << t / N;

    return 0;
}
