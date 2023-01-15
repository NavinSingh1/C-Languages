// program to print system date
#include<stdio.h>
#include<Conio.h>
#include<windows.h>
void main()
{
    SYSTEMTIME stime;
    GetSystemTime(&stime);
    printf("%d / %d / %d", stime.wDay, stime.wMonth, stime.wYear);
}

// windows has its own SYSTEMTIME structure which stores information on the date and time.
/*typedef struct_SYSTEMTIME {
    wYEAR;
    wMonth;
    wDayOfWeek;
    wDay;
    wHour;
    wMinute;
    wSecond;
    wMilliseconds;
} SYSTEMTIME;
*/