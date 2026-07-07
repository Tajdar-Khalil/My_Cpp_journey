/*
    This program converts temperatures between Celsius, Fahrenheit, and Kelvin.
    In this program, the user will be prompted to enter a temperature value and
    the unit of measurement (Celsius, Fahrenheit, or Kelvin). 
    The program will then perform the necessary calculations to convert 
    the temperature to the other two units and display the results.

    Name: Tajdar Khalil
    Program: Temperature Converter
    version: 1.0
    date: 2026-07-07
*/

#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

// Function prototypes
double celsiusToFahrenheit(double celsius);
double fahrenheitToCelsius(double fahrenheit);
double celsiusToKelvin(double celsius);
double kelvinToCelsius(double kelvin);
double fahrenheitToKelvin(double fahrenheit);
double kelvinToFahrenheit(double kelvin);
void displayTemperatureFacts(double celsius);

// Constant for conversion
const double FREEZING_POINT_CELSIUS = 0.0;      // Freezing point of water in Celsius
const double FREEZING_POINT_FAHRENHEIT = 32.0;  // Freezing point of water in Fahrenheit
const double ABSOLUTE_ZERO_CELSIUS = -273.15;    // Absolute zero in Celsius
const double C_TO_F_FACTOR = 9.0 / 5.0;         // Factor for Celsius to Fahrenheit conversion
const double F_TO_C_FACTOR = 5.0 / 9.0;         // Factor for Fahrenheit to Celsius conversion
int main() {
	 // Display program header
    cout << "=======================================" << endl;
    cout << "       TEMPERATURE CONVERTER           " << endl;
    cout << "=======================================" << endl;
    cout << "This program converts temperatures between" << endl;
    cout << "Celsius, Fahrenheit, and Kelvin." << endl << endl;
    
    // Main program code will go here
    int choice;
    do {
        // Display menu options
        cout << "============================================================" << endl;
        cout << "  Please select the conversion you want to perform:" << endl;
        cout << "  1. Celsius to Fahrenheit" << endl;
        cout << "  2. Fahrenheit to Celsius" << endl;
        cout << "  3. Celsius to Kelvin" << endl;
        cout << "  4. Kelvin to Celsius" << endl;
        cout << "  5. Fahrenheit to Kelvin" << endl;
        cout << "  6. Kelvin to Fahrenheit" << endl;
        cout << "  7. Exit" << endl;
        cout << "============================================================" << endl;
        cout << "Enter the selection (1-7): ";

        cin >> choice;

        double inputTemp, convertedTemp;

        switch (choice) {
            case 1:     // Celsius to Fahrenheit
                cout << "Enter temperature in Celsius: ";
                cin >> inputTemp;
                convertedTemp = celsiusToFahrenheit(inputTemp);
                cout << fixed << setprecision(2) << inputTemp << " °C = " 
                     << convertedTemp << " °F" << endl;
                displayTemperatureFacts(inputTemp);
                break;
            case 2:     // Fahrenheit to Celsius
                cout << "Enter temperature in Fahrenheit: ";
                cin >> inputTemp;
                convertedTemp = fahrenheitToCelsius(inputTemp);
                cout << fixed << setprecision(2) << inputTemp << " °F = " 
                     << convertedTemp << " °C" << endl;
                displayTemperatureFacts(convertedTemp);
                break;
            case 3:     // Celsius to Kelvin
                cout << "Enter temperature in Celsius: ";
                cin >> inputTemp;
                convertedTemp = celsiusToKelvin(inputTemp);
                cout << fixed << setprecision(2) << inputTemp << " °C = " 
                     << convertedTemp << " K" << endl;
                displayTemperatureFacts(inputTemp);
                break;
            case 4:     // Kelvin to Celsius
                cout << "Enter temperature in Kelvin: ";
                cin >> inputTemp;
                convertedTemp = kelvinToCelsius(inputTemp);
                cout << fixed << setprecision(2) << inputTemp << " K = " 
                     << convertedTemp << " °C" << endl;
                displayTemperatureFacts(convertedTemp);
                break;
            case 5:    // Fahrenheit to Kelvin  
                cout << "Enter temperature in Fahrenheit: ";
                cin >> inputTemp;
                convertedTemp = fahrenheitToKelvin(inputTemp);
                cout << fixed << setprecision(2) << inputTemp << " °F = " 
                     << convertedTemp << " K" << endl;
                displayTemperatureFacts(convertedTemp);
                break;
            case 6:     // Kelvin to Fahrenheit
                cout << "Enter temperature in Kelvin: ";
                cin >> inputTemp;
                convertedTemp = kelvinToFahrenheit(inputTemp);
                cout << fixed << setprecision(2) << inputTemp << " K = " 
                     << convertedTemp << " °F" << endl;
                displayTemperatureFacts(convertedTemp);
                break;
            case 7:      // Exit
                cout << "Thank you for using the Temperature Converter!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 7);

    return 0;
}

// Function definitions

//1. Convert Celsius to Fahrenheit
double celsiusToFahrenheit(double celsius) {
    return (celsius * C_TO_F_FACTOR) + FREEZING_POINT_FAHRENHEIT;
}

//2. Convert Fahrenheit to Celsius
double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - FREEZING_POINT_FAHRENHEIT) * F_TO_C_FACTOR;
}

//3. Convert Celsius to Kelvin
double celsiusToKelvin(double celsius) {
    return celsius - ABSOLUTE_ZERO_CELSIUS;
}

//4. Convert Kelvin to Celsius
double kelvinToCelsius(double kelvin) {
    return kelvin + ABSOLUTE_ZERO_CELSIUS;
}

//5. Convert Fahrenheit to Kelvin
double fahrenheitToKelvin(double fahrenheit) {
    return celsiusToKelvin(fahrenheitToCelsius(fahrenheit));
}

//6. Convert Kelvin to Fahrenheit
double kelvinToFahrenheit(double kelvin) {
    return celsiusToFahrenheit(kelvinToCelsius(kelvin));
}

void displayTemperatureFacts(double celsius) {
    const double ABSOLUTE_ZERO_CELSIUS = -273.15; // Absolute zero in Celsius
    const double FREEZING_POINT_CELSIUS = 0.0; // Freezing point of water in Celsius

    cout << "\nInteresting facts about this temperature " << endl;

    if (celsius < ABSOLUTE_ZERO_CELSIUS) {
        cout << "This is below absolute zero, which is physically impossible." << endl;
    }
    else if (celsius == ABSOLUTE_ZERO_CELSIUS) {
        cout << "This is absolute zero, the lowest possible temperature." << endl;
    }
    else if (celsius < FREEZING_POINT_CELSIUS) {
        cout << "This is below the freezing point of water." << endl;
    }
    else if (celsius == FREEZING_POINT_CELSIUS) {
        cout << "This is the freezing point of water." << endl;
    }
    else if (celsius <= 20.0) {
        cout << "This is a cool temperature." << endl;
    }
    else if (celsius <= 30.0) {
        cout << "This is a comfortable room temperature." << endl;
    }
    else if (celsius <= 40.0) {
        cout << "This is a hot temperature." << endl;	
    }
    else if (celsius <= 100.0) {
        cout << "This is a very hot temperature." << endl;
    } 
    else if (celsius == 100.0) {
        cout << "This is the boiling point of water." << endl;
    }
    else {
        cout << "This is above the boiling point of water." << endl;
    }
}
