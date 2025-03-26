#include <iostream>

using namespace std;

bool A[100001];
bool B[100001];

int main()
{
    for(int i = 0; i < 100000; i++) A[i] = getchar() - '0';
    cin.ignore();
    for(int i = 0; i < 100000; i++) B[i] = getchar() - '0';

    for(int i = 0; i < 100000; i++) cout << (A[i] && B[i]);
    cout << '\n';
    for(int i = 0; i < 100000; i++) cout << (A[i] || B[i]);
    cout << '\n';
    for(int i = 0; i < 100000; i++) cout << (A[i] + B[i] == 1);
    cout << '\n';
    for(int i = 0; i < 100000; i++) cout << !A[i];
    cout << '\n';
    for(int i = 0; i < 100000; i++) cout << !B[i];

    return 0;
}
