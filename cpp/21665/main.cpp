#include <iostream>

using namespace std;

int n, m;

char img[100][100];

int res = 0;

int main()
{
    cin >> n >> m;
    cin.ignore();
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++) img[i][j] = getchar();
        getchar();
    }
    
    getchar();
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(img[i][j] == getchar()) res++;
        }
        getchar();
    }
    
    cout << res;
    
    return 0;
}
