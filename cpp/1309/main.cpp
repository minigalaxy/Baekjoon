#include <iostream>

using namespace std;

int N;

int m[100'000][3] = { 0, };

int main()
{
    cin >> N;
    
    m[0][0] = m[0][1] = m[0][2] = 1;
    
    for(int i = 1; i < N; i++){
        m[i][0] = (m[i - 1][1] + m[i - 1][2]) % 9901;
        m[i][1] = (m[i - 1][0] + m[i - 1][2]) % 9901;
        m[i][2] = (m[i - 1][0] + m[i - 1][1] + m[i - 1][2]) % 9901;
    }
    
    cout << (m[N - 1][0] + m[N - 1][1] + m[N - 1][2]) % 9901;
    
    return 0;
}
