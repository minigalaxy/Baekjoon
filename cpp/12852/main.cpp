#include <iostream>

using namespace std;

int N;

int mem[1000001] = { 0, 0 };

void bt(int c){
    cout << c << ' ';
    
    if(c == 1) return;
    
    int t = N;
    
    if(c % 3 == 0) if(mem[c / 3] < mem[t]) t = c / 3;
    if(c % 2 == 0) if(mem[c / 2] < mem[t]) t = c / 2;
    if(mem[c - 1] < mem[t]) t = c - 1;
    
    bt(t);
}

int main()
{
    cin >> N;
    
    for(int i = 2; i <= N; i++){
        mem[i] = mem[i - 1] + 1;
        if(i % 2 == 0) mem[i] = min(mem[i], mem[i / 2] + 1);
        if(i % 3 == 0) mem[i] = min(mem[i], mem[i / 3] + 1);
    }
    
    cout << mem[N] << '\n';
    
    bt(N);
    
    return 0;
}
