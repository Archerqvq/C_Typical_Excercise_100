#include <stdio.h>
int main()
{
    // 思路：
    // 利润为x时，小于x的bonus都是固定的；所以可以先求题目给出利润x取值范围的bonus
    float bonus_100k_to_200k = 100000 * 0.1;                        // 利润为: 100K ~ 200K的固定bonus
    float bonus_200k_to_400k = bonus_100k_to_200k + 100000 * 0.075; // 利润为: 200K ~ 400K的固定bonus
    float bonus_400k_to_600k = bonus_200k_to_400k + 200000 * 0.050; // 利润为: 400K ~ 600K的固定bonus
    float bonus_600k_to_1m = bonus_200k_to_400k + 200000 * 0.030;   // 利润为: 600K ~ 1m的固定bonus
    float bonus_over_1m = bonus_600k_to_1m + 400000 * 0.015;        // 利润为: 超过1m的固定bonus

    int i;
    float bonus;

    printf("Input company profit of this month: ");
    scanf("%d", &i);

    if (i <= 100000)
        bonus = i * 0.1;
    else if (i <= 200000)
        bonus = bonus_100k_to_200k + (i - 100000) * 0.075;
    else if (i <= 400000)
        bonus = bonus_200k_to_400k + (i - 200000) * 0.050;
    else if (i <= 600000)
        bonus = bonus_400k_to_600k + (i - 200000) * 0.030;
    else
        bonus = bonus_600k_to_1m + (i - 1000000) * 0.010;

    printf("Congrat, the bonus shuold be %.2f\n", bonus);

	return 0;

}