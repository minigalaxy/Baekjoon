#include <iostream>

using namespace std;

int N, x[100000];

int abs_heap[100001] = { 0, };
int heap_size = 0;

void push(int n){
    heap_size++;
    abs_heap[heap_size] = n;

    int idx = heap_size;

    while(idx > 1){
        if(idx % 2 == 0){
            if(abs(n) < abs(abs_heap[idx / 2]) || (abs(n) == abs(abs_heap[idx / 2]) && n < abs_heap[idx / 2])){
                int tmp = abs_heap[idx / 2];
                abs_heap[idx / 2] = abs_heap[idx];
                abs_heap[idx] = tmp;

                idx /= 2;
            } else break;
        } else {
            if(abs(n) < abs(abs_heap[(idx - 1) / 2]) || (abs(n) == abs(abs_heap[(idx - 1) / 2]) && n < abs_heap[(idx - 1) / 2])){
                int tmp = abs_heap[(idx - 1) / 2];
                abs_heap[(idx - 1) / 2] = abs_heap[idx];
                abs_heap[idx] = tmp;

                idx = (idx - 1) / 2;
            } else break;
        }
    }
}

void pop(){
    abs_heap[1] = abs_heap[heap_size];
    heap_size--;

    int idx = 1;

    while(idx * 2 <= heap_size){
        if(abs(abs_heap[idx * 2]) < abs(abs_heap[idx * 2 + 1]) || (abs(abs_heap[idx * 2]) == abs(abs_heap[idx * 2 + 1]) && abs_heap[idx * 2] < abs_heap[idx * 2 + 1])){
            if(abs(abs_heap[idx]) > abs(abs_heap[idx * 2]) || (abs(abs_heap[idx]) == abs(abs_heap[idx * 2]) && abs_heap[idx] > abs_heap[idx * 2])){
                int tmp = abs_heap[idx * 2];
                abs_heap[idx * 2] = abs_heap[idx];
                abs_heap[idx] = tmp;

                idx *= 2;
            } else break;
        } else {
            if(abs(abs_heap[idx]) > abs(abs_heap[idx * 2 + 1]) || (abs(abs_heap[idx]) == abs(abs_heap[idx * 2 + 1]) && abs_heap[idx] > abs_heap[idx * 2 + 1])){
                int tmp = abs_heap[idx * 2 + 1];
                abs_heap[idx * 2 + 1] = abs_heap[idx];
                abs_heap[idx] = tmp;

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
                cout << abs_heap[1] << '\n';
                pop();
            }
        } else {
            push(x[i]);
        }
    }

    return 0;
}
