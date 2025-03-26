#include <iostream>
#include <algorithm>

using namespace std;

int N;

long long liquid[5000];

int res[3] = { 0, 1, 2 };

int main()
{
    cin >> N;

    for(int i = 0; i < N; i++) cin >> liquid[i];

    sort(liquid, liquid + N);

    for(int i = 0; i < N - 2; i++){
        int l = i + 1, r = N - 1;

        while(l < r){
            long long s = liquid[i] + liquid[l] + liquid[r];

            if(abs(s) < abs(liquid[res[0]] + liquid[res[1]] + liquid[res[2]])){
                res[0] = i;
                res[1] = l;
                res[2] = r;
            }

            if(s > 0) r--;
            else l++;
        }
    }

    cout << liquid[res[0]] << ' ' << liquid[res[1]] << ' ' << liquid[res[2]];

    return 0;
}
