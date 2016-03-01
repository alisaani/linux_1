#include <stdio.h>

typedef struct cicici {
        char a;        int b;
        char c;        int d;
        char e;        int f;
        } ci;
        
typedef struct ccciii {
        char a;        char b;
        char c;        int d;
        int e;         int f;
        } cc;

int main(){
    printf ("Первая: %d, вторая: %d", sizeof(ci), sizeof(cc));
    return 0;   
}
