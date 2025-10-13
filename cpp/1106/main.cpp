#include <iostream>
#include <algorithm>

using namespace std;

int C, N;

int hotel[20][2];

int mem[1100] = { 0, };

int main()
{
    cin >> C >> N;
    
    for(int i = 0; i < N; i++){
        cin >> hotel[i][0] >> hotel[i][1];
    }
    
    fill(mem + 1, mem + 1100, 100'000);
    
    for(int i = 0; i < C; i++){
        for(int j = 0; j < N; j++){
            mem[i + hotel[j][1]] = min(mem[i + hotel[j][1]], mem[i] + hotel[j][0]);
        }
    }
    
    cout << *min_element(mem + C, mem + 1100);
    
    return 0;
}
