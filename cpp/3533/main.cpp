#include <iostream>

using namespace std;

bool x[10];

bool res = false;

int main()
{
    for(int i = 0; i < 10; i++) cin >> x[i];
    
    for(int i = 0; i < 10 - 1; i++){
        for(int j = i + 1; j < 10; j++){
            res ^= x[i] || x[j];
        }
    }
    
    for(int i = 0; i < 10 - 2; i++){
        for(int j = i + 1; j < 10 - 1; j++){
            for(int k = j + 1; k < 10; k++){
                res ^= x[i] || x[j] || x[k];
            }
        }
    }
    
    cout << res;
    
    return 0;
}
