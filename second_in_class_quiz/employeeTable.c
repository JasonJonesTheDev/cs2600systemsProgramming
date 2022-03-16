#include <string.h>
#include <stdlib.h>
#include "employee.h"
Employee EmployeeTable[] =
    {
        {1001, "Daphne Borromeo", "909-555-2134", 8.78},
        {1011, "Tammy Franklin", "213-555-1212", 4.50},
        {1140, "Dorris Perl", "310-555-1215", 7.80},
        {4011, "Tony Bobcat", "909-555-1235", 6.34},
        {5045, "Brian Height", "714-555-2749", 8.32}
};
const int EmployeeTableEntries = sizeof(EmployeeTable) / sizeof(EmployeeTable[0]);