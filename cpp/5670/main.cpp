#include <iostream>
#include <memory.h>

using namespace std;

int TC;

int N;

struct Trie{
    bool is_end;

    int child_cnt, next_cnt;

    Trie * children[26];

    Trie() : is_end(false), child_cnt(0), next_cnt(0) {
        memset(children, 0, sizeof(children));
    }

    ~Trie(){
        for(int i = 0; i < 26; i++){
            if(children[i]) delete children[i];
        }
    }

    void add(const char *key){
        child_cnt++;

        if(*key == '\0') is_end = true;
        else {
            int c = *key - 'a';

            if(children[c] == 0){
                children[c] = new Trie();

                next_cnt++;
            }

            children[c] -> add(key + 1);
        }
    }

    int solve(){
        if(next_cnt == 0) return 0;

        if(next_cnt == 1 && !is_end){
            for(int i = 0; i < 26; i++){
                if(children[i]) return children[i] -> solve();
            }
        }

        int total = 0;

        for(int i = 0; i < 26; i++){
            if(children[i]) total += children[i] -> child_cnt + children[i] -> solve();
        }

        return total;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cout.setf(ios_base::fixed);
    cout.precision(2);

    while(cin >> N){
        Trie tr;

        for(int j = 0; j < N; j++){
            string c;
            cin >> c;

            tr.add(&c[0]);
        }

        double total = 0;

        for(int j = 0; j < 26; j++){
            if(tr.children[j]) total += tr.children[j] -> child_cnt + tr.children[j] -> solve();
        }

        cout << total / N << '\n';
    }

    return 0;
}
