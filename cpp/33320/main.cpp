#include <iostream>
#include <vector>

using namespace std;

vector<int> find_union(int N, vector<int> A, vector<int> B, vector<int> C, vector<int> D) {
    vector<int> ans(N, -1);

    int tmp = 0;

    for(int i = 0; i < N; i++){
        if(ans[i] == -1){
            for(int j = 0; j < N; j++){
                if(A[j] <= C[i] && B[j] <= D[i] && C[j] >= A[i] && D[j] >= B[i]) ans[j] = tmp;
            }

            tmp++;
        }
    }

    return ans;
}

int main(){
    vector<int> res = find_union(2, {0, 2}, {1, 0}, {3, 4}, {3, 2});

    for(int t: res) cout << t;

    return 1;
}
