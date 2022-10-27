#include "header2.h"

Complex* summ(Complex* num1, Complex* num2){
    Complex* res = new Complex;
    res->a = num1->a + num2->a;
    res->b = num1->b + num2->b;
    return res;
}

Complex* sub(Complex* num1, Complex* num2){
    Complex* res = new Complex;
    res->a = num1->a - num2->a;
    res->b = num1->b - num2->b;
    return res;
}

Complex* multi(Complex* num1, Complex* num2){
    Complex* res = new Complex;
    res->a = num1->a * num2->a - num1->b * num2->b;
    res->b = num1->a * num2->b + num2->a * num1->b;
    return res;
}

Complex* div(Complex* num1, Complex* num2){
    Complex* res = new Complex;
    res->a = (num1->a * num2->a + num1->b * num2->b) / (num2->a*num2->a + num2->b*num2->b);
    res->b = (num2->a * num1->b - num1->a * num2->b) / (num2->a*num2->a + num2->b*num2->b);
    return res;
}
