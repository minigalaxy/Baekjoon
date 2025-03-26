#include <iostream>
#include <string>

using namespace std;

string A, B;

int main()
{
    cin >> A >> B;

    if(A == "null") cout << "NullPointerException\nNullPointerException";
    else if(B == "null") cout << "false\nfalse";
    else {
        if(A.size() != B.size()) cout << "false\nfalse";
        else {
            bool f1 = true, f2 = true;

            for(int i = 0; i < A.size(); i++){
                if(A[i] != B[i]){
                    f1 = false;

                    if(A[i] >= 97) A[i] -= 32;
                    else if(B[i] >= 97) B[i] -= 32;

                    if(A[i] != B[i]) f2 = false;
                }
            }

            cout << ((f1) ? "true" : "false") << '\n';
            cout << ((f2) ? "true" : "false");
        }
    }

    return 0;
}
