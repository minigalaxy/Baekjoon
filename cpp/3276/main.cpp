#include <iostream>

using namespace std;

int N;

int main()
{
    cin >> N;
    
    int i = 0;
    
    while(true){
        if(i * i >= N){
            cout << i << ' ' << i;
            
            break;
        }
        if(i * i + i >= N){
            cout << i << ' ' << i + 1;
            
            break;
        }
        
        i++;
    }
    
    return 0;
}
