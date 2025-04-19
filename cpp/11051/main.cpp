#include <iostream>

using namespace std;

int N, K;

int mem[1001][1001];

int dc(int n, int k){
    if(n == k || k == 0) return 1;
    
    if(mem[n][k] == -1) mem[n][k] = (dc(n - 1, k) + dc(n - 1, k - 1)) % 10007;

    return mem[n][k];
}

int main()
{
    fill(mem[0], mem[1001], -1);
    
    cin >> N >> K;
    
    cout << dc(N, K);
    
    return 0;
}
