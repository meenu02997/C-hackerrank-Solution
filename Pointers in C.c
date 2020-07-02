#include <stdio.h>

void update(int *a,int *b) {
    int c,d;
    c=(*a+*b);
    if(*b>*a)
    {
        d=*b-*a;
    }
     else
     {
         d=*a-*b;
     }
      printf("%d\n%d", c, d);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    scanf("%d %d", &a, &b);
    update(pa, pb);
    return 0;
}
