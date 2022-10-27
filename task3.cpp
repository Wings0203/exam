#include "header3.h"

float** MultiMatrix(int n1, int m1, float** a, int n2, int m2, float** b){
    float **res = new float*[n1];
    int summ;
    for (int i = 0; i < n1; i++) {
        res[i] = new float[m2];
        for (int j = 0; j < m2; j++)
        {
            summ = 0;
            for(int k = 0; k < m1; k++)
            {
                summ += a[i][k] * b[k][j];
            }
            res[i][j] = summ;
        }
    }
    return res;
}