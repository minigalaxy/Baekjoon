#include <iostream>
#include <algorithm>

using namespace std;

string A, B;

int d[50] = { 0, };

int main()
{
    cin >> A >> B;
    
    for(int i = 0; i < A.size(); i++){
        for(int j = 0; j <= B.size() - A.size(); j++){
            if(A[i] != B[i + j]) d[j]++;
        }
    }
    
    cout << *min_element(d, d + B.size() - A.size() + 1);
    
    return 0;
}
