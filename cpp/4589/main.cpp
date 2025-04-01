#include <iostream>

using namespace std;

int N;

int n[3];

int main()
{
    cin >> N;
    
    cout << "Gnomes:\n";
    
    for(int i = 0; i < N; i++){
        cin >> n[0] >> n[1] >> n[2];
        
        if((n[0] > n[1] && n[1] > n[2]) || (n[0] < n[1] && n[1] < n[2])) cout << "Ordered\n";
        else cout << "Unordered\n";
    }
    
    return 0;
}
