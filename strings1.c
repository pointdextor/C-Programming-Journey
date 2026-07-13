#include <stdio.h>

int main()

{
    char dna[] = "ATGCGATTA";
    int countA=0;
    int countG=0;
    char *p = dna;
    while(*p != '\0')
    {
        if (*p == 'A')
        {    
            countA++;
        }
        else if (*p == 'G')
        {
            countG++;
        }
        p++;
    }

    printf("Count of A: %d\n", countA);
    printf("Count of G: %d\n", countG);
    printf("Purines = %d", countA + countG);
    return 0;
}