#include <iostream>

using namespace std;

int n[10];

int sum = 0;

int main()
{
    for(int i = 0; i < 10; i++){
        cin >> n[i];
        
        sum += n[i];
    }
    
    for(int i = 0; i < 10; i++){
        if(n[i] == sum / 2){
            cout << n[i];
            
            break;
        }
    }
    
    return 0;
}
