#include <stdio.h>
#include <string.h>

/*Result
 *
 * value of val is 10
 * value of ptr is 0xbffb4cd4
 * value of ptr is 10
 * value of ptr is 0xbffb4cd4
 *
 */
int main(int argc, char* argv[]){
    int val = 10;
    int* ptr = &val;
    //此為較為正確寫法，之後遇到其他型別轉型，會有幫助
    int* p2 = (int*) &val;

    printf("value of val is %d\n", val);
    printf("value of ptr is %p\n", ptr);
    printf("value of ptr is %d\n", *p2);
    printf("value of ptr is %p\n", p2);

    return;
}
