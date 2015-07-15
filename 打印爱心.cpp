#include <stdio.h> 
int main() 
{ 
    for (float y = 1.5f; y > -1.5f; y -= 0.1f){ 
        for (float x = -1.5f; x < 1.5f; x += 0.05f){ 
            float a = x * x + y * y - 1; 
            putchar(a * a * a - x * x * y * y * y <= 0.0f ? '*' : ' '); 
        } //(2*x^2 + 2*y^2 - 1)^3 - x^2*y^3 <= 0 ? "*" : " "
        putchar('\n'); 
    } 
    return 0;
}