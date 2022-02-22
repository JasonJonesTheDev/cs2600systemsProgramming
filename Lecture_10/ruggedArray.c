#include <stdio.h>

int main(void)
{

    // Assume all days between have been typed the same

    // 7 rows each of 10 character. Note only Wednesday needs 10 character the others waste unused space

    char day_table[][10] = {

        {'M', 'o', 'n', 'd', 'a', 'y', '\0'}, // 7 bytes used (allocated 10 bytes)

        {'T', 'u', 'e', 's', 'd', 'a', 'y', '\0'}, // 8 bytes used (allocated 10 bytes)

        {'W', 'e', 'd', 'n', 'e', 's', 'd', 'a', 'y', '\0'}, // all 10 used

        {'S', 'u', 'n', 'd', 'a', 'y', '\0'} // 7 bytes

    };

    // A better way to allocate something similar is to use a ragged array -> array of pointers!

    // char * daysOfWeek[] = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

    // Compiler will make daysOFWeek just large enough for each row.

    // In this case it will be 7 rows each row will be of varying size depending on the String.

    // NOTE "" compiler will automatically append the NULL = '\0'

    // In reality as daysOFWeek is an array of pointers we will want to protect them from being changed hence we should make it a constant

    const char *daysOfWeek[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

    // What is this doing?

    printf("sizeof %d\n\n", sizeof(day_table) / sizeof(int)); // Note only 4 days in this table

    printf("size of daysOfWeek %d\n\n", sizeof(daysOfWeek));

    printf("daysOfWeek %c\n\n", *(daysOfWeek[0]));

    printf("daysOfWeek %c\n\n", *(daysOfWeek[0] + 1));

    // printing day_table

    for (int row = 0; row < sizeof(day_table) / sizeof(int); row++)

    {

        printf("%s\n", day_table[row]);
    }

    // Printing daysOfWeek

    for (int day = 0; day < 7; day++)
    {

        int count = 0;

        while (*(daysOfWeek[day] + count) != '\0')

        {

            printf("%c", *(daysOfWeek[day] + count++));
        }

        printf("\n");
    }

    return 0;
}