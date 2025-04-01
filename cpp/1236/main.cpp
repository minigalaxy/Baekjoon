#include <iostream>

using namespace std;

int N, M;

bool r[50] = { false, }, c[50] = { false, };
int n = 0, m = 0;

int main()
{
    cin >> N >> M;
    cin.ignore();
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            if(getchar() == 'X'){
                r[i] = true;
                c[j] = true;
            }
        }
        getchar();
    }
    
    for(int i = 0; i < N; i++) n += !r[i];
    for(int i = 0; i < M; i++) m += !c[i];
    
    cout << max(n, m);
    
    return 0;
}
