// Assignment 4
// Neebinnodin Buswa

#include <iostream>
#include <conio.h>

using namespace std;

struct Employee {
    int ID;
    string FirstName;
    string LastName;
    float HoursWorked;
    float HourlyRate;
};

int main() 
{
    //Employee *employees = nullptr;

    cout << "How many employees? ";
    int sizeEmployee = 0;
    cin >> sizeEmployee;

    Employee *employees = new Employee[sizeEmployee];
    cout << "\n";
    int ID = 0;
    float HoursWorked = 0;
    float HourlRate = 0;
    for (int i = 0; i < sizeEmployee; i++)
    {
        cout << "Enter the ID for Employee " << (i + 1) << ": ";
        cin >> employees[i].ID;
        cout << "Enter the First Name for Employee " << (i + 1) << ": ";
        cin >> employees[i].FirstName;
        cout << "Enter the Last Namefor Employee " << (i + 1) << ": ";
        cin >> employees[i].LastName;
        cout << "Enter the Hours Worked for Employee " << (i + 1) << ": ";
        cin >> employees[i].HoursWorked;
        cout << "Enter the Hourly Rate for Employee " << (i + 1) << ": ";
        cin >> employees[i].HourlyRate;
        cout << "\n";
    }

    cout << "Pay Report\n";
    cout << "----------\n";

    float totalPay = 0;

    for (int i = 0; i < sizeEmployee; i++)
    {
        float weeklyPay = employees[i].HoursWorked * employees[i].HourlyRate;
        totalPay += weeklyPay;
        cout << employees[i].ID << ". "
            << employees[i].FirstName << " "
            << employees[i].LastName << ": $"
            << weeklyPay;
        cout << "\n";
    }
    cout << "\n";
    cout << "Total Pay: $" << totalPay << "\n";

    delete[] employees;

	(void)_getch();
	return 0;
}