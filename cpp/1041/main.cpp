#include <iostream>
#include <algorithm>

using namespace std;

int N;

int num[6];

int corner[8][3] = {
{ 0, 1, 2 },
{ 0, 1, 3 },
{ 0, 2, 4 },
{ 0, 3, 4 },
{ 5, 1, 2 },
{ 5, 1, 3 },
{ 5, 2, 4 },
{ 5, 3, 4 },
};

int edge[12][2] = {
{ 0, 1 },
{ 0, 2 },
{ 0, 3 },
{ 0, 4 },
{ 5, 1 },
{ 5, 2 },
{ 5, 3 },
{ 5, 4 },
{ 1, 2 },
{ 2, 4 },
{ 4, 3 },
{ 3, 1 },
};

int C = 150, E = 100;

int main()
{
    cin >> N;
    
    for(int i = 0; i < 6; i++) cin >> num[i];
    
    for(int i = 0; i < 8; i++){
        C = min(C, num[corner[i][0]] + num[corner[i][1]] + num[corner[i][2]]);
    }
    
    for(int i = 0; i < 12; i++){
        E = min(E, num[edge[i][0]] + num[edge[i][1]]);
    }
    
    if(N == 1) cout << num[0] + num[1] + num[2] + num[3] + num[4] + num[5] - *max_element(num, num + 6);
    else cout << 1LL * (N - 2) * (N - 2) * *min_element(num, num + 6) + 4LL * (N - 2) * (N - 1) * *min_element(num, num + 6) + 4 * C + 4 * (N - 2) * E + 4 * (N - 1) * E;
    
    return 0;
}
