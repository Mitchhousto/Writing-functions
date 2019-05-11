#include <stdio.h>

float arithmetic(float x, float y);

int main() {
    float a = 1, b = 5;
    float result;
    result = arithmetic(a,b);
    printf("%f plus %f is %f\n", a, b, result);
 }

float arithmetic(float x, float y){
    float r=x+y;
    return r;
}