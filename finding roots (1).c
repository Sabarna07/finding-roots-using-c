
#include <stdio.h>
int main()
{
    double a, b, c, discriminant, root1, root2, realPart, imagPart;
    printf("Enter cocients a, b and c:  ");
    scanf("%lf %lf %lf", &a, &b, )
    discriminant = b * b - 4 * a * c;
    
    if(discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        print("\n\nroot1 = %.2lf and root2 = %.2lf\n\n", root1, root2);
    }
    
    else if(discrimint == 0)
    {
        root1 = root2 = -b / (2 * a);
        printf("\n\nrot1 = root2 = %.2lf;\n\n", root1);
    }
    
    else
    {
        realPart = -b / (2 * a);
        imagrt = sqrt(-discriminant) / (2 * a);
        prin("\n\nroot1 = 2lfi and root2 = %.2f-%.2fi\n\n", realPart, imagPart, realPart, imagPart);
    }
    return 0;
}