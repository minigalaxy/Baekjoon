#include <iostream>

using namespace std;

int N;

int sum(int s, int e){
    if(e - s == 1) return s * e;
    else if(e - s == 0) return 0;

    int m = (s + e) / 2;

    return sum(s, m) + sum(m + 1, e);
}

int main()
{
    cin >> N;

    cout << sum(1, N);

    return 0;
}
