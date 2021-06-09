#include <iostream>
#include "Sum_H.h"

using namespace std;

int sum(int num1, int num2) {
    int total = 0;

    for(int i = num1; i <= num2; i++) {
        total += i;
    }

    return total;
}