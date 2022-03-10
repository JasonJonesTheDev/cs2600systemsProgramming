// Compile using the following command:
// gcc employeeMain.c employeeTable.c employeeOne.c

// gcc employeeMain.c employeeTable.c employeeTwo.c
#include <string.h>
#include <stdlib.h>
#include "employee.h"

int main(void)
{

    // defined in employeeSearchOne.c

    PtrToEmployee searchEmployeeByNumber(const Employee table[], int sizeTable, long numberToFind);

    PtrToEmployee searchEmployeeByName(const Employee table[], int sizeTable, char *nameToFind);

    PtrToEmployee searchEmployeeBySalary(const Employee table[], int sizeTable, double targetSalary);

    PtrToEmployee searchEmployeeByPhone(const Employee table[], int sizeTable, char *targePhone);

    // defined in employeeTable.c

    extern Employee EmployeeTable[];

    extern const int EmployeeTableEntries;

    PtrToEmployee matchPtr; // Declaration

    //--------------------------------------------1(a)-----------------------------------------------------
    // searchEEbyPhone found
    matchPtr = searchEmployeeByPhone(EmployeeTable, EmployeeTableEntries, "909-555-2134");

    if (matchPtr != NULL)

        printf("Employee Phone 909-555-2134 is in record %d\n", matchPtr - EmployeeTable);

    else
        printf("Employee Phone is NOT found in the record\n");

    matchPtr = searchEmployeeByPhone(EmployeeTable, EmployeeTableEntries, "909-420-2134");

    // searchEEbyPhone !found
    if (matchPtr != NULL)

        printf("Employee Phone 909-420-2134 is in record %d\n", matchPtr - EmployeeTable);

    else
        printf("Employee Phone 909-420-2134 is NOT found in the record\n");

    // searchEEbySalary found
    matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 7.80);

    if (matchPtr != NULL)

        printf("Employee Salary of 7.80 is in record %d\n", matchPtr - EmployeeTable);

    else
        printf("Employee Salary of 7.80 found in the record\n");

    // searchEEbySalary !found
    matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 6.95);

    if (matchPtr != NULL)
        printf("Employee Salary 6.95 is in record %d\n", matchPtr - EmployeeTable);

    else
        printf("Employee Salary of 6.95 is NOT found in the record\n");

    return EXIT_SUCCESS;
}