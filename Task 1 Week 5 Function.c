#include <stdio.h>

#include <stdio.h>

float arithmetic(float x, float y);

int main() {
    float a = 1, b = 5;

    printf("%f plus %f is %f\n", a, b, arithmetic(a,b));
 }

float arithmetic(float x, float y){
    return x+y;
}