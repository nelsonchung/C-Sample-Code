#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
    char buf_1[20] = {"I am happy"};
    int buf_length = strlen(buf_1);
    printf("The length of \"%s\" is %d\n", buf_1, buf_length);

    return 0;
}
