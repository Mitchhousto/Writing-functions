
#include<stdio.h>

float mySqrt(float k);

int main()
{
    printf("sqrt(26) = %f\n", mySqrt(26.0));

}
float mySqrt(float k){
    int n;
    float xn = k/2.0;
    for(n=0 ; n<10; n++);
        xn = 0.5*(xn + (k/xn));
   
   return xn;
}
