// #include<stdio.h>
// int main(){
//     float x,y,multi;
//     printf("Input x value:");
//     scanf("%f",&x);
//     printf("Input y value:");
//     scanf("%f",&y);
//     multi=x*y;
//     printf("The result of x*y is:",multi);
//     return 0;
// }
#include <stdio.h>

int main() {
    float x, y, multi;
    
    printf("Input x value: ");
    scanf("%f", &x);  // ✅ Quotes added

    printf("Input y value: ");
    scanf("%f", &y);  // ✅ Quotes added

    multi = x * y;  // ✅ Perform the multiplication

    printf("The result of x*y= %.2f",multi);  // ✅ Final output

    return 0;
}

// Data Type	Format Specifier
// int	%d
// float	%f
// double	%lf
// char	%c
// string	%s