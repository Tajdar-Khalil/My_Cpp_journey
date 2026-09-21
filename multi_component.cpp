// Include necessary headers
#include <iostream>  // For input/output operations
#include <iomanip>   // For output formatting
#include <string>    // For string data type
#include <ctime>     // For date and time functions
#include <cstdlib>   // For random number generation

// Using the standard namespace
using namespace std;

int main() {
    // Program title and introduction
    cout << "================================================" << endl;
    cout << "           MULTI-COMPONENT PROGRAM              " << endl;
    cout << "================================================" << endl;
    cout << "This program demonstrates using multiple headers" << endl;
    cout << "and formatting techniques in C++." << endl << endl;
    
    // Component 1: Basic information display
    cout << "------------- COMPONENT 1: BASIC INFO -------------" << endl;

    // Create variables to store information
    string name = "C++ Programming";
    string version = "C++17";
    string creator = "Bjarne Stroustrup";
    int yearCreated = 1985;

    // Display the information
    cout << "Language: " << name << endl;
    cout << "Version: " << version << endl;
    cout << "Creator: " << creator << endl;
    cout << "Year Created: " << yearCreated << endl << endl;
    
    // Add more variables and facts about C++
    string fact1 = "C++ is an extension of C language";
    bool fact2 = true;  // C++ supports object-oriented programming
    int fact3 = 3;      // C++ has 3 basic programming paradigms
    
    // Display additional facts
    cout << "Interesting Fact 1: " << fact1 << endl;
    cout << "Interesting Fact 2: C++ supports OOP: " << (fact2 ? "Yes" : "No") << endl;
    cout << "Interesting Fact 3: C++ supports " << fact3 << " programming paradigms" << endl << endl;
    
    // Component 2: Formatted numeric output
    cout << "---------- COMPONENT 2: FORMATTED NUMBERS ---------" << endl;

    // Create numeric variables
    double pi = 3.14159265358979323846;
    double e = 2.71828182845904523536;
    double goldenRatio = 1.61803398874989484820;

    // Display with different precision
    cout << "Default display:" << endl;
    cout << "Pi = " << pi << endl;
    cout << "e = " << e << endl;
    cout << "Golden Ratio = " << goldenRatio << endl << endl;

    cout << "With 2 decimal places:" << endl;
    cout << fixed << setprecision(2);
    cout << "Pi = " << pi << endl;
    cout << "e = " << e << endl;
    cout << "Golden Ratio = " << goldenRatio << endl << endl;

    cout << "With 6 decimal places:" << endl;
    cout << fixed << setprecision(6);
    cout << "Pi = " << pi << endl;
    cout << "e = " << e << endl;
    cout << "Golden Ratio = " << goldenRatio << endl << endl;

    // Reset formatting
    cout.unsetf(ios::fixed);
    cout << setprecision(6);
    
    // Component 3: Table display
    cout << "------------- COMPONENT 3: TABLE DATA ------------" << endl;

    // Set up table header
    cout << left << setw(15) << "Data Type" << setw(20) << "Size (bytes)" << setw(20) << "Value Range" << endl;
    cout << string(55, '-') << endl;

    // Table rows
    cout << left << setw(15) << "int" << right << setw(20) << sizeof(int) << left << setw(20) << "  -2^31 to 2^31-1" << endl;
    cout << left << setw(15) << "double" << right << setw(20) << sizeof(double) << left << setw(20) << "  ±1.7e^308" << endl;
    cout << left << setw(15) << "char" << right << setw(20) << sizeof(char) << left << setw(20) << "  -128 to 127" << endl;
    cout << left << setw(15) << "bool" << right << setw(20) << sizeof(bool) << left << setw(20) << "  true or false" << endl;
    
    // Add more rows to the table for additional data types
    cout << left << setw(15) << "float" << right << setw(20) << sizeof(float) << left << setw(20) << "  ±3.4e^38" << endl;
    cout << left << setw(15) << "long" << right << setw(20) << sizeof(long) << left << setw(20) << "  -2^31 to 2^31-1" << endl;
    
    // Component 4: Custom component - Program information
    cout << "\n------------- COMPONENT 4: PROGRAM INFO ------------" << endl;

    // Get current date/time info
    time_t now = time(0);
    tm* localTime = localtime(&now);
    char dateBuffer[20];
    strftime(dateBuffer, 20, "%Y-%m-%d", localTime);
    string currentDate = dateBuffer;
    
    string userName = "C++ Learner";
    int linesOfCode = 125; // Updated count for the solution

    // Format and display program information
    cout << "Program: Multi-Component Example" << endl;
    cout << "Author: " << userName << endl;
    cout << "Date: " << currentDate << endl;
    cout << "Code Statistics:" << endl;
    cout << " - Lines of code: " << linesOfCode << endl;
    cout << " - Header files: 5" << endl;  // Updated count
    cout << " - Components: 4" << endl;

    // Display a progress bar (simulated)
    cout << "Completion: [";
    int progress = 100; // 100% complete for solution
    for (int i = 0; i < 20; i++) {
        if (i < progress/5) cout << "=";
        else cout << " ";
    }
    cout << "] " << progress << "%" << endl;
    
    // Program end
    cout << "\nProgram execution completed." << endl;
    return 0;
}
