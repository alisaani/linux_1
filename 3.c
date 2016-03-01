#include <stdio.h>

typedef struct bitwise {
        int b1:1;
        int b2:1;
        int b3:1;
        int b4:1;
        int b5:1;
        int b6:1;
        int b7:1;
        int b8:1;
        } bits;

int main(){
    int a;
    bits *p;
    printf("¬ведите число: \n");
    scanf("%d", &a);
    p = (bits *)&a;
    printf("%d%d%d%d%d%d%d%d \n", p->b1, -p->b2, -p->b3, -p->b4, -p->b5, -p->b6, -p->b7, -p->b8);
    return 0;   
}
