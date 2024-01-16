#include <stdio.h> 
 
int main() { 
    int choice; 
    float length, width, base, height, radius, area; 
 
    printf("Enter the shape to calculate area:\n"); 
    printf("1. Circle\n"); 
    printf("2. Rectangle\n"); 
    printf("3. Triangle\n"); 
    scanf("%d", &choice); 
 
    switch (choice) { 
        case 1: 
            printf("Enter radius of circle: "); 
            scanf("%f", &radius); 
            area = 3.14 * radius * radius; 
            printf("Area of circle = %f\n", area); 
            break; 
        case 2: 
            printf("Enter length and width of rectangle: "); 
            scanf("%f %f", &length, &width); 
            area = length * width; 
            printf("Area of rectangle = %f\n", area); 
            break; 
        case 3: 
            printf("Enter base and height of triangle: "); 
            scanf("%f %f", &base, &height); 
            area = 0.5 * base * height; 
            printf("Area of triangle = %f\n", area); 
            break; 
        default: 
            printf("Invalid choice\n");
			 } 
    return 0; 
}     
