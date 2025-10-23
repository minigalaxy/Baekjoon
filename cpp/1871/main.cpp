#include <iostream>

using namespace std;

int N;

string p;

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> p;
        
        cout << (abs((p[0] - 'A') * 26 * 26 + (p[1] - 'A') * 26 + p[2] - 'A' - stoi(p.substr(4, 4))) <= 100 ? "nice\n" : "not nice\n");
    }
    
    return 0;
}
