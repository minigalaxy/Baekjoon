#include <iostream>

using namespace std;

int N;

int main()
{
    cin >> N;

    for(int i = 1; i < N; i++){
        for(int j = 0; j < N - i; j++) cout << ' ';
        for(int j = 0; j < i * 2 - 1; j++) cout << '*';
        cout << '\n';
    }

    for(int i = N; i > 0; i--){
        for(int j = 0; j < N - i; j++) cout << ' ';
        for(int j = 0; j < i * 2 - 1; j++) cout << '*';
        cout << '\n';
    }

    return 0;
}
