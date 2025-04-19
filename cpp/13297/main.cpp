#include <iostream>

using namespace std;

int N;

string c;

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> c;
        
        cout << c.size() << '\n';
    }
    
    return 0;
}
