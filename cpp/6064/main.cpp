#include <iostream>
#include <vector>

using namespace std;

int T;

int M, N, x, y;

vector<int> k;

int gcd(int a, int b){
    while(b){
        int tmp = a;
        a = b;
        b = tmp % b;
    }

    return a;
}

int solve(){
    int g = gcd(M, N);

    for(int i = 0; i <= N / g; i++){
        if((M * i + x) % N == y){
            return M * i + x;
        }
     }

     return -1;
}

int main()
{
    cin >> T;

    for(int i = 0; i < T; i++){
         cin >> M >> N >> x >> y;

         y %= N;

         k.push_back(solve());
    }

    for(int t: k) cout << t << '\n';

    return 0;
}
