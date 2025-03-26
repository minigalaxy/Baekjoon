#include <iostream>
#include <vector>

using namespace std;

int T = 0;

vector<int> A;
vector<int> B;

int main()
{
    int a, b;

    while(true){
        cin >> a >> b;

        if(a == 0) break;

        A.push_back(a);
        B.push_back(b);

        T++;
    }

    for(int i = 0; i < T; i++){
        cout << A[i] + B[i] << endl;
    }

    return 0;
}
