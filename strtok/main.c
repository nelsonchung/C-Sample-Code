#include <stdio.h>
#include <string.h>

/*分段出換行符號*/
int main(void)
{
    char str[] = "This is string\n";
    //char *str = "This is string\n"; //if I use this, segmentation fault occur in calling strtok
    char *changeline = "\n";

    printf("str is - %s", str);
    char *ptr;
    ptr = strtok(str, changeline);
    printf("ptr is - %s", ptr);
    printf("str is - %s", str);
    return;
}
