#include <iostream>
#include <string>
#include <set>

using namespace std;

string gene_A, gene_B;

int X;

string g;

char ex[5];

int main()
{
    cin >> gene_A >> gene_B >> X;

    for(int i = 0; i < 10; i += 2){
        if((gene_A[i] >= 97 && gene_A[i + 1] >= 97) && (gene_B[i] >= 97 && gene_B[i + 1] >= 97)){
            ex[i / 2] = 'A' + i / 2;
        } else if((gene_A[i] <= 69 && gene_A[i + 1] <= 69) || (gene_B[i] <= 69 && gene_B[i + 1] <= 69)){
            ex[i / 2] = 'a' + i / 2;
        } else {
            ex[i / 2] = 0;
        }
    }

    for(int i = 0; i < X; i++){
        bool f = true;

        cin >> g;

        for(int j = 0; j < 5; j++){
            if(ex[j] == g[j]) f = false;
        }

        if(f) cout << "Possible baby.\n";
        else cout << "Not their baby!\n";
    }

    return 0;
}
