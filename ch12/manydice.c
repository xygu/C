/* manydice.c -- 多次掷骰子的模拟程序 p339 */
// 与diceroll.c 一起编译
#include <stdio.h>
#include <stdlib.h> // 为stand()函数提供原型
#include <time.h>// 为time()函数提供原型
#include "diceroll.h" // 为roll_n_dice()和roll_count 提供原型

int main (void)
{
    int dice, roll;
    int sides;

    srand ((unsigned int) time(0));//随机种子
    printf ("Enter the number of sides per die. 0 to stop.\n");
    while ( scanf("%d", &sides) == 1 && sides > 0)
    {
        printf ("How many dice?\n");
        scanf ("%d", &dice);
        roll = roll_n_dice(dice , sides);
        printf ("You have rolled a %d using %d %d-sided dice.\n",
                roll, dice, sides);
    printf ("How many sides? Enter 0 to stop.\n");
    }
    printf ("The rollem() function was called %d times.\n",
           roll_count);
    printf ("GOOD FORTUNE TO YOU!\n");
    return 0;
}
