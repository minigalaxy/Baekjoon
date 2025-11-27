#include <iostream>

using namespace std;

string X;

int res = 0;

int main()
{
    cin >> X;
    
    while(X.size() > 1){
        int sum = 0;
        
        for(char c: X) sum += c - '0';
        
        X = to_string(sum);
        
        res++;
    }
    
    cout << res << '\n' << (stoi(X) % 3 == 0 ? "YES" : "NO");
    
    return 0;
}
