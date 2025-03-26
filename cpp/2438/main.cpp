#include <iostream>

using namespace std;

int N;

int main()
{
    cin >> N;

    for(int i = 1; i < N + 1; i++){
        for(int j = 0; j < i; j++) cout << '*';
        cout << endl;
    }

    return 0;
}
