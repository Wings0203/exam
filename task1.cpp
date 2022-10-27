#include "header.h"

int fact(int n){
    if (n == 0 || n == 1){
        return 1;
    }
    int summ;
    summ = n * fact(n-1);
    return summ;
}