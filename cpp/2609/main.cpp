#include <iostream>

using namespace std;

int A, B;

int G, L;

int main()
{
    cin >> A >> B;

    for(int i = A; i > 0; i--){
        if(A % i == 0 && B % i == 0){
            G = i;
            break;
        }
    }

    for(int i = A; i <= A * B; i++){
        if(i % A == 0 && i % B == 0){
            L = i;
            break;
        }
    }

    cout << G << endl << L;

    return 0;
}
