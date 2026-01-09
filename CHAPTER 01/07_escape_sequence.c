#include <stdio.h>

int main(void) 
{
    int a;
    char ch = 'a';
    ch = 'c';
    ch = '\n'; // represents a new line
    printf("Hey i am good \n nice\n");
    printf("Hey i am good \t nice\n");
    printf("Hey i am good \\ nice\n");
    printf("\"Hey i am good\" nice\n");
    printf("\'Hey i am good\' nice\n");
    return 0;
}

// Escape Sequence's % There Meaning
// \n	New line
// \t	Horizontal tab
// \\	Backslash (\)
// \"	Double quote (")
// \'	Single quote (')