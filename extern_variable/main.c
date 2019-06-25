#include <stdio.h>
#include <stdlib.h>

#include "sample_extern.h"

int main(int argc, char* argv[])
{
    int b=10;
    printf("The variable is %d\n", get_variable_B());
    set_variable_B(b);
    printf("The variable is %d\n", get_variable_B());

    return 1;
}
