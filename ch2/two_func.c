/* two_func.c --在一个文件中使用两个函数 p25 */
#include <stdio.h>

void butler(void);

int main(void)
{

    printf("I will summon the butler function\n");
    butler();
    printf("Yes,Bring me some tea and writeable CD-ROMS.\n");
    return 0;
}


void butler(void)
{
    printf("You rang sir?\n");
}
