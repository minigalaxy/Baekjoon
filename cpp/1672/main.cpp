#include <iostream>

using namespace std;

int N;

string A;

char T[4][4];

int trans(char c){
    if(c == 'A') return 0;
    if(c == 'G') return 1;
    if(c == 'C') return 2;
    return 3;
}

int main()
{
    T[0][0] = 'A';
    T[1][1] = 'G';
    T[2][2] = 'C';
    T[3][3] = 'T';
    
    T[0][1] = T[1][0] = 'C';
    T[0][2] = T[2][0] = 'A';
    T[0][3] = T[3][0] = 'G';
    T[1][2] = T[2][1] = 'T';
    T[1][3] = T[3][1] = 'A';
    T[2][3] = T[3][2] = 'G';
    
    cin >> N;
    
    cin >> A;
    
    for(int i = N; i > 1; i--){
        A[i - 2] = T[trans(A[i - 1])][trans(A[i - 2])];
        A.pop_back();
    }
    
    cout << A;
    
    return 0;
}
