#include "aplusb.h"

std::vector<int> A2, B2;

void initialize(std::vector<int> A, std::vector<int> B) {
    A2 = A;
    B2 = B;
    return;
}

int answer_question(int i, int j) {
    return A2[i] + B2[j];
}
