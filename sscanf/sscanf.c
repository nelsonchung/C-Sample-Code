#include <stdio.h>

int main(int argc, char* argv[]){
    char buf[128] = "I am Nelson. Age is 28";
    char str[128] = "I am Nelson. Age is";
    int age = 0;
    sscanf(buf,"I am Nelson. Age is %d", &age); 
    printf("age is %d\n", age);
    return 0;
}
