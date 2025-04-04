#include <iostream>

using namespace std;

int A, B;

int r1, r2;

double w = 0, t = 0;

int cnt[11];

int main()
{
    fill(cnt, cnt + 11, 2);
    
    cin >> A >> B;
    
    cnt[A]--;
    cnt[B]--;
    
    if(A == B) r1 = A + 9;
    else r1 = (A + B) % 10;
    
    for(int i = 1; i <= 10; i++){
        cnt[i]--;
        for(int j = i; j <= 10; j++){
            cnt[j]--;
            if(cnt[i] >= 0 && cnt[j] >= 0){
                if(i == j) r2 = i + 9;
                else r2 = (i + j) % 10;
                
                if(r1 > r2) w += (cnt[i] + 1) * (cnt[j] + 1);
                t += (cnt[i] + 1) * (cnt[j] + 1);
            }
            cnt[j]++;
        }
        cnt[i]++;
    }
    
    cout.precision(3);
    cout << fixed;
    cout << w / t;

    return 0;
}
