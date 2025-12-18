#include <iostream>

using namespace std;

int T;

int N;

int A, B;

int u, v;

int main()
{
    cin >> T;
    
    for(int i = 0; i < T; i++){
        cin >> N;
        
        cin >> A >> B;
        
        for(int j = 0; j < N; j++) cin >> u >> v;
        
        cout << "Material Management " << i + 1 << "\nClassification ---- End!\n";
    }
    
    return 0;
}
