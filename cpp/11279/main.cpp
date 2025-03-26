#include <iostream>

using namespace std;

int N, x[100000];

int max_heap[100001] = { 0, };
int heap_size = 0;

void push(int n){
    heap_size++;
    max_heap[heap_size] = n;

    int idx = heap_size;

    while(idx > 1){
        if(idx % 2 == 0){
            if(n > max_heap[idx / 2]){
                int tmp = max_heap[idx / 2];
                max_heap[idx / 2] = max_heap[idx];
                max_heap[idx] = tmp;

                idx /= 2;
            } else break;
        } else {
            if(n > max_heap[(idx - 1) / 2]){
                int tmp = max_heap[(idx - 1) / 2];
                max_heap[(idx - 1) / 2] = max_heap[idx];
                max_heap[idx] = tmp;

                idx = (idx - 1) / 2;
            } else break;
        }
    }
}

void pop(){
    max_heap[1] = max_heap[heap_size];
    heap_size--;

    int idx = 1;

    while(idx * 2 <= heap_size){
        if(max_heap[idx * 2] > max_heap[idx * 2 + 1]){
            if(max_heap[idx] < max_heap[idx * 2]){
                int tmp = max_heap[idx * 2];
                max_heap[idx * 2] = max_heap[idx];
                max_heap[idx] = tmp;

                idx *= 2;
            } else break;
        } else {
            if(max_heap[idx] < max_heap[idx * 2 + 1]){
                int tmp = max_heap[idx * 2 + 1];
                max_heap[idx * 2 + 1] = max_heap[idx];
                max_heap[idx] = tmp;

                idx = idx * 2 + 1;
            } else break;
        }
    }
}

int main()
{
    cin >> N;

    for(int i = 0; i < N; i++) cin >> x[i];

    for(int i = 0; i < N; i++){
        if(x[i] == 0){
            if(heap_size == 0) cout << 0 << '\n';
            else {
                cout << max_heap[1] << '\n';
                pop();
            }
        } else {
            push(x[i]);
        }
    }

    return 0;
}
