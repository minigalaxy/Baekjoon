#include <iostream>
#include <algorithm>

using namespace std;

int M;

int X, Y;

bool b[3] = { true, false, false };

int main()
{
    cin >> M;
    
    for(int i = 0; i < M; i++){
        cin >> X >> Y;
        
        swap(b[X - 1], b[Y - 1]);
    }
    
    for(int i = 0; i < 3; i++){
        if(b[i]){
            cout << i + 1;
            break;
        }
    }
    
    return 0;
}
