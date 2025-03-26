#include <iostream>
#include <vector>

using namespace std;

int N;

bool nonprime[4000001] = { false, };

vector<int> prime;
vector<long long> sum;

int res = 0;

int main()
{
    cin >> N;

    sum.push_back(0);

    for(int i = 2; i < 4000001; i++){
        if(!nonprime[i]){
            prime.push_back(i);
            sum.push_back(sum.back() + i);

            for(int j = i; j < 4000001; j += i) nonprime[j] = true;
        }
    }

    int l = 0, r = 0, s;

    while(r < prime.size()){
        s = sum[r + 1] - sum[l + 1] + prime[l];

        if(s == N){
            res++;
            r++;
        } else if(s > N){
            l++;

            if(l > r) break;
        } else r++;
    }

    cout << res;

    return 0;
}
