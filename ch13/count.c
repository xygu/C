/* count.c  -- 使用标准I/O p356 */
#include <stdio.h>

#include <stdlib.h>

int main (int argc, char *argv[])
{
    int ch;
    FILE *fp;
    long count = 0, lines = 0;
    if (argc != 2)
    {
        printf ("Usage: %s filename\n", argv[0]);
        exit(1);
    }
    if((fp = fopen (argv[1], "r")) == NULL)
    {
        printf ("Can't open %s\n", argv[1]);
        exit(1);
    }
    while ((ch = getc (fp)) != EOF)
    {
        putc(ch, stdout);
        count++;
        if (ch == '\n')
            lines++;
    }
    fclose (fp);
    printf ("File %s has %ld lines %ld characters.\n",
            argv[1], lines, count);
    return 0;
}
