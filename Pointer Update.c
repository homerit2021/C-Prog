#include <stdio.h>
#include <stdlib.h>
void update(int *c,int *d) {
    
    int x=*c;
    int y=*d;
    *c=x+y;
    *d=abs(x-y);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d\n%d", &a, &b);
    update(pa,pb);
    printf("%d\n%d", a, b);

    return 0;
}
