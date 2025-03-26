#include <iostream>

using namespace std;

int G, P;

int parent[100000];

int g[100000];

bool e = false;

int find_gate(int n){
    if(n < 0) return e = true;

    if(n == parent[n]){
        return parent[n] = n - 1;
    } else {
        return parent[n] = find_gate(parent[n]);
    }
}

int main()
{
    cin >> G >> P;

    for(int i = 0; i < G; i++){
        parent[i] = i;
    }

    for(int i = 0; i < P; i++){
        cin >> g[i];
    }

    for(int i = 0; i < P; i++){
        find_gate(g[i] - 1);

        if(e){
            cout << i;

            return 0;
        }
    }

    cout << P;

    return 0;
}
