#include <stdio.h>

int main(int argc, char* argv[])
{
    char buf = 0;
    int buf_length = sizeof(buf);
    printf("The length of buf is %d\n", buf_length);

    char buf_1[20] = {0};
    buf_length = sizeof(buf_1);
    printf("The length of buf_1 is %d\n", buf_length);

    char buf_2[10] = {0};
    buf_length = sizeof(buf_1);
    printf("The length of buf_2 is %d\n", buf_length);

    buf_length = sizeof(char);
    printf("The length of char is %d\n", buf_length);
    return 0;
}
