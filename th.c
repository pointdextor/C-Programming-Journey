#include <stdio.h>

void reverseComplement(char *dna)
{
    
    int length = sequenceLength();
    int i;
    char index = *dna + length;
    for(i = length; i>=0; i--)
    {
        if (index == 'A')
        {
            printf("%c", 'T');
        }

        else if (index == 'T')
        {
            printf("%c", 'A');
        }

        else if (index == 'G')
        {
            printf("%c", 'C');
        }

        else if (index == 'C')
        {
            printf("%c", 'G');
        }
    }

}
int main()
{
    char dna[] = "ATGC";
    reverseComplement(dna);
    return 0;
}
