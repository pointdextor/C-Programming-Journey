#include <stdio.h>

int sequenceLength(char *dna)
{
    int length = 0;
    char *p = dna;
    while(*p != '\0')
    {
        length++;
        p++;
    }
    return length;
}

int countBase(char *dna, char base)
{
    int count = 0;
    char *p = dna;
    while(*p != '\0')
    {
        if (*p == base)
        {
            count++;
        }
        p++;
    }
    return count;
}

float gcContent(char *dna)
{
    int length = sequenceLength(dna);
    int gcount = countBase(dna, 'G');
    int ccount = countBase(dna, 'C');
    return ((float)(gcount + ccount) / length) * 100;
}

float atContent(char *dna)
{
    int length = sequenceLength(dna);
    int tcount = countBase(dna, 'T');
    int acount = countBase(dna, 'A');
    return ((float)(acount + tcount) / length) * 100;
}

int main()
{
    char dna[100];
    printf("Enter DNA sequence: ");
    scanf("%99s", dna);
    
    int length = sequenceLength(dna);
    int countA = countBase(dna, 'A');
    int countG = countBase(dna, 'G');
    int countC = countBase(dna, 'C');
    int countT = countBase(dna, 'T');
    float gccontent = gcContent(dna);
    float atcontent = atContent(dna);

    printf("Length of this DNA sequence: %d\n", length);
    printf("A: %d\n", countBase(dna,'A'));
    printf("T: %d\n", countBase(dna,'T'));
    printf("G: %d\n", countBase(dna,'G'));
    printf("C: %d\n", countBase(dna,'C'));
    printf("GC Content: %.2f%%\n", gccontent);
    printf("AT Content: %.2f%%\n", atcontent);

    return 0;
}