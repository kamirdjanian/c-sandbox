#include <stdio.h>

#define IN 1 /* inside a word */ 
#define OUT 0 /* outside a word */

/* count lines, words, and characters in input */ 
int main()
{
    int c, pstate, state;
    pstate = state = OUT;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT)
            state = IN;

        if (state == IN)
            putchar(c);
        else if (pstate != state)
            putchar('\n');

        pstate = state;
    }
    putchar('\n');
    return 0;
}
