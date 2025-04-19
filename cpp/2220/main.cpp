#include <iostream>

using namespace std;

int n;

int max_heap[100001] = { 0, 1, };
int heap_size = 1;

void reverse_pop(int x){
    int idx = heap_size, tmp;

    while(idx > 1){
        if(max_heap[idx] < max_heap[idx / 2]){
            tmp = max_heap[idx];
            max_heap[idx] = max_heap[idx / 2];
            max_heap[idx / 2] = tmp;
            
            idx /= 2;
        }
        else break;
    }
    
    max_heap[1] = x;
    max_heap[++heap_size] = 1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    cin >> n;
    
    for(int i = 2; i <= n; i++) reverse_pop(i);
    
    for(int i = 1; i <= n; i++) cout << max_heap[i] << ' ';
    
    return 0;
}
