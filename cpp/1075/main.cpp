#include <iostream>

using namespace std;

int N, F;

int main()
{
    cin >> N >> F;

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if((N - (N % 100) + i * 10 + j) % F == 0){
                cout << i << j;
                return 0;
            }
        }
    }

    return 0;
}
