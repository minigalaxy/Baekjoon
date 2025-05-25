#include <iostream>
#include <algorithm>

using namespace std;

string C = "HEPCHEPC", RC = "CPEHCPEH";

string U, D;

int main()
{
    cin >> U >> D;
    
    reverse(D.begin(), D.end());
    
    if(C.find(U + D) != string::npos || RC.find(U + D) != string::npos) cout << "YES";
    else cout << "NO";
    
    return 0;
}
