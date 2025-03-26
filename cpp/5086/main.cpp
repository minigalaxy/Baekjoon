#include <iostream>
#include <vector>

using namespace std;

int A, B;

vector<int> res;

int main()
{
    while(true){
        cin >> A >> B;

        if(A == 0) break;

        if(B % A == 0) res.push_back(0);
        else if(A % B == 0) res.push_back(1);
        else res.push_back(2);
    }

    for(int t: res){
        if(t == 0) cout << "factor" << '\n';
        else if(t == 1) cout << "multiple" << '\n';
        else cout << "neither" << '\n';
    }

    return 0;
}
