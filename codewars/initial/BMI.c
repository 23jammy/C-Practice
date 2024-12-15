#include <stdio.h>

const char *bmi (double weight, double height) {
    double BMI = weight / (height*height);
    if (BMI > 30) {
        return "Obese";
    } else if (BMI > 25) {
        return "Overweight";
    } else if (BMI > 18.5) {
        return "Normal";
    } else {
        return "Underweight";
    }
}

int main () {
    double weight, height;
    printf("Enter your weight: ");
    scanf("%lf", &weight);

    printf("Enter your height: ");
    scanf("%lf", &height);

    printf("Result: %s", bmi(weight, height));
    
    
}