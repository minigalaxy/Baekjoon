#include <iostream>
#include <cmath>

using namespace std;

int K, N;

int cable[10000];

int min_cable = 0, max_cable = 0;

int div_cable(int len){
    int sum = 0;

    for(int i = 0; i < K; i++) sum += cable[i] / len;

    return sum;
}

int binary_search(long start, long end){
    long mid = (start + end) / 2 + 1;
    int cnt = div_cable(mid);

    if(start >= end) return start;

    if(cnt >= N){
        return binary_search(mid, end);
    } else return binary_search(start, mid - 1);
}

int main()
{
    cin >> K >> N;

    for(int i = 0; i < K; i++){
        cin >> cable[i];

        if(cable[i] > max_cable) max_cable = cable[i];
        if(cable[i] < min_cable || min_cable == 0) min_cable = cable[i];
    }

    cout << binary_search(min_cable / ceil(double(N) / double(K)), max_cable);

    return 0;
}
