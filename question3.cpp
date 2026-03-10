#include <stdio.h>


float celsiusToFahrenheit(float c);
float fahrenheitToCelsius(float f);

int main() {

    float celsius = 25.0;
    float fahrenheit = 77.0;

    float resultF, resultC;

    
    resultF = celsiusToFahrenheit(celsius);
    resultC = fahrenheitToCelsius(fahrenheit);

    
    printf("Celsius to Fahrenheit:\n");
    printf("%.2f°C = %.2f°F\n\n", celsius, resultF);

    printf("Fahrenheit to Celsius:\n");
    printf("%.2f°F = %.2f°C\n", fahrenheit, resultC);

    return 0;
}

float celsiusToFahrenheit(float c) {
    return (c * 9 / 5) + 32;
}

float fahrenheitToCelsius(float f) {
    return (f - 32) * 5 / 9;
}
