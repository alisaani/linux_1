#include <stdio.h>
#include <math.h>

typedef struct complex {
        double real;
        double imagine;
        } comp;
        
comp summa (comp a, comp b){
     comp result;
     result.real = a.real + b.real;
     result.imagine = a.imagine + b.imagine;
     return result;
     }

comp minus (comp a, comp b){
     comp result;
     result.real = a.real - b.real;
     result.imagine = a.imagine - b.imagine;
     return result;
     }
     
comp multiplication (comp a, comp b){
     comp result;
     result.real = a.real*b.real - a.imagine*b.imagine;
     result.imagine = a.imagine*b.real + a.real*b.imagine;
     return result;
     }
     
comp divide (comp a, comp b){
     comp result;
     result.real = (a.real*b.real + a.imagine*b.imagine)/(pow(b.real, 2) + pow(b.imagine, 2));
     result.imagine = (a.real*b.real - b.imagine*a.imagine)/(pow(b.real, 2) + pow(b.imagine, 2));
     return result;
     }

int main(){
    comp a, b, answer;   
    printf ("Введите действительную и мнимую часть для первого числа: \n");
    scanf ("%lf%lf", &a.real, &a.imagine);    
    printf ("Введите действительную и мнимую часть для второго числа: \n");
    scanf ("%lf  %lf", &b.real, &b.imagine);
    answer = summa(a, b);
    printf ("Сумма: (%lf) + (%lf) \n", answer);
    answer = minus(a, b);
    printf ("Разница: (%lf) + (%lf) \n", answer);
    answer = multiplication(a, b);
    printf ("Произведение: (%lf) + (%lf) \n", answer);
    answer = divide(a, b);
    printf ("Деление: (%lf) + (%lf) \n", answer);
    return 0;
}













