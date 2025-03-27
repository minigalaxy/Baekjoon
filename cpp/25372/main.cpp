#include <iostream>

using namespace std;

int N;

string pw;

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> pw;
        
        cout << ((pw.size() >= 6 && pw.size() <= 9) ? "yes" : "no") << '\n';
    }
    
    return 0;
}
