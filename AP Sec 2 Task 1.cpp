// hamza latif 25k-3098
#include <stdio.h>
#include<math.h>
#define pi 3.141592653589793
int main() {
    float e, a, b;
    printf("Enter electric flux E \n");
    scanf("%f",&e);
    printf("Enter surface area A \n");
    scanf("%f",&a);
    printf("Enter the angle between electric field vector and area vactor in  theeta \n");
    scanf("%f" ,&b);
    float angle = pi*b/180;
    float flux = e*a*cos(angle);
    printf("The flux for the given data is : %.2f",flux);
    return 0;
    

    return 0;
}