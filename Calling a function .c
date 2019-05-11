

#include <stdio.h>

 // This line is the function prototype
 // "float x" indicates that it takes a single argument of type float.
 // The return type is void because it does not return a value
 void printResult(float x);

 int main() {
    float a = 2.0;

     printResult(a); // Test the function by calling it
 }

 // The lines below are the function definition
     void printResult(float x) {
 // This printf() statement is the only code in the function body
 // The argument "x" is a pre-initialised variable within this scope
    printf("The final calculation result was: %f\n", x);
}