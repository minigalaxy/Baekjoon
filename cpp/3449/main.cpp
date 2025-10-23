#include <iostream>

using namespace std;

int TC;

string A, B;

int main()
{
    cin >> TC;

    for(int i = 0; i < TC; i++){
        cin >> A >> B;

        int res = 0;

        for(int j = 0; j < A.size(); j++){
            if(A[j] != B[j]) res++;
        }

        cout << "Hamming distance is " << res << ".\n";
    }



    return 0;
}
