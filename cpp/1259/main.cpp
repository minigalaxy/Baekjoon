#include <iostream>
#include <string>
#include <vector>

using namespace std;

string n;

vector<bool> r;

int main()
{
    while(true){
        cin >> n;

        if(n == "0") break;

        bool t = true;

        for(int i = 0; i < n.size() / 2; i++){
            if(n[i] != n[n.size() - 1 - i]){
                t = false;
                break;
            }


        }

        r.push_back(t);
    }

    for(bool t: r) cout << ((t) ? "yes" : "no") << endl;

    return 0;
}
