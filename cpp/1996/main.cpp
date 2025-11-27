#include <iostream>

using namespace std;

int N;

int m[1'000][1'000] = { 0, };
bool mine[1'000][1'000] = { false, };

int main()
{
    cin >> N;
    cin.ignore();
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            int c = getchar();
            
            if(c != '.'){
                mine[i][j] = true;
                    
                for(int k = -1; k <= 1; k++){
                    for(int l = -1; l <= 1; l++){
                        if(-1 < i + k && i + k < N && -1 < j + l && j + l < N) m[i + k][j + l] += c - '0';
                    }
                }
            }
        }
        getchar();
    }
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(mine[i][j]) cout << '*';
            else {
                if(m[i][j] >= 10) cout << 'M';
                else cout << m[i][j];
            }
        }
        
        cout << '\n';
    }
    
    return 0;
}
