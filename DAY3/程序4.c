#include <stdio.h>

int main()
{
    int year, month, day, sum = 0;
    printf("plz input year, month and day:");
    scanf("%d, %d, %d", &year, &month, &day);

    // 判断是不是闰年，且月份大于2
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
    {
        if (month > 2)
        {
            // 日数需要+1
            sum++;
        }
    }

    // 判断月
    switch (month)
    {
    case 1:
        sum = 0;
        break;
    case 2:
        sum = 31;
        break;
    case 3:
        sum = 59;
        break;
    case 4:
        sum = 90;
        break;
    case 5:
        sum = 120;
        break;
    case 6:
        sum = 151;
        break;
    case 7:
        sum = 181;
        break;
    case 8:
        sum = 212;
        break;
    case 9:
        sum = 243;
        break;
    case 10:
        sum = 273;
        break;
    case 11:
        sum = 304;
        break;
    case 12:
        sum = 334;
        break;

    default:
        printf("DATA ERROR!\n");
        break;
    }

    // 计算日
    sum += day;

    printf("It the %dth day of the year\n", sum);
    return 0;
}