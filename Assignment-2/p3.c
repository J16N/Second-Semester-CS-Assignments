#include <stdio.h>
#include <math.h>
    
int main(void) {
    double a = 0, b = 0, c = 0, discrim = 0;
    
    printf("\n ------ Find roots of quadratic equation ------\n\n");
    printf(" A: "); scanf("%lf", &a);
    printf(" B: "); scanf("%lf", &b);
    printf(" C: "); scanf("%lf", &c);
    
    discrim = pow(b, 2) - (4 * a * c);
    
    if (discrim >= 0) {
        printf("\n Root-1: %.2lf\n Root-2: %.2lf\n\n", 
            (- b + sqrt(discrim)) / (2 * a), 
            (- b - sqrt(discrim)) / (2 * a));
    
    } else {
        double real_part = - b / (2 * a),
               img_part = sqrt(- discrim) / (2 * a);
        
        printf("\n Root-1: %.2lf + %.2lfi\n Root-2: %.2lf - %.2lfi\n\n", 
            real_part, img_part, real_part, img_part);
    }
    
    return 0;
}