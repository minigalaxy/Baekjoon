#include <iostream>
#include <algorithm>

using namespace std;

int N, num[1000];

int main()
{
    cin >> N;

    for(int i = 0; i < N; i++) cin >> num[i];

    for(int i = 0; i < N - 1; i++){
        for(int j = i + 1; j < N; j++){
            if(num[i] > num[j]) swap(num[i], num[j]);
        }
    }

    for(int i = 0; i < N; i++) cout << num[i] << '\n';

    return 0;
}
