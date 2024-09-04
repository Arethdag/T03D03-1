#include <stdio.h>

int main() {
    float a, b;
    scanf("%f %f", &a, &b);
    if(a == (int)a && b ==(int)b){
    if ((a * a + b * b) < 25) {
        printf("GOTCHA");
    } else {
        printf("MISS");
    }
    }
    else{printf("n/a\n");}
    return 0;
}