#include <iostream>
#include "header1.h"
#include "header2.h"
#include "header3.h"
#include "header4.h"

#define task4

#ifdef task1
int main() {
    int n;
    std::cin >> n;
    std::cout << fact(n);
    return 0;
}
#endif

#ifdef task2
int main() {
    float a1, b1, a2, b2;
    std::cin >> a1 >> b1 >> a2 >> b2;
    Complex* num1 = new Complex;
    Complex* num2 = new Complex;
    num1->a = a1;
    num1->b = b1;
    num2->a = a2;
    num2->b = b2;
    Complex* res;
    res = summ(num1, num2);
    std::cout<< "+: " << res->a << " + ("<< res->b << "*i)\n";
    res = sub(num1, num2);
    std::cout<< "-: " << res->a << " + ("<< res->b << "*i)\n";
    res = multi(num1, num2);
    std::cout<< "*: " << res->a << " + ("<< res->b << "*i)\n";
    res = div(num1, num2);
    std::cout<< "/: " << res->a << " + ("<< res->b << "*i)\n";
    return 0;
}
#endif

#ifdef task3
int main(){
    int n1, m1, n2, m2;
    std::cin >> n1 >> m1 >> n2 >> m2;
    if (n2 != m1)
    {
        std::cout << "Matrix multiplication is not possible";
        return 0;
    }
    float **arr1 = new float*[n1];
    for (int i = 0; i < n1; i++){
        arr1[i] = new float[m1];
        for (int j = 0; j < m1; j++)
        {
            std::cin >> arr1[i][j];
        }
    }
    float **arr2 = new float*[n2];
    for (int i = 0; i < n2; i++) {
        arr2[i] = new float[m2];
        for (int j = 0; j < m2; j++)
        {
            std::cin >> arr2[i][j];
        }
    }
    float** res = MultiMatrix(n1, m1, arr1, n2, m2, arr2);
    for (int i = 0; i < n1; i++){
        for (int j = 0; j < m2; j++)
        {
            std::cout << res[i][j] << " ";
        }
        std::cout << "\n";
    }
    return 0;
}
#endif

#ifdef task4
int main(){
    node* head;
    int n;
    std::cin >> n;
    int num;
    for (int i = 0; i < n; i++)
    {
        std::cin >> num;
        head = Add2List(head, num);
    }
    node* curr = head;
    for (int i = 0; i < n; i++)
    {
        std::cout << curr->value << " ";
        curr = curr->next;
    }
    return 0;
}
#endif