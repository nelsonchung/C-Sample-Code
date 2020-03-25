#include <stdio.h>
#include <string.h>

enum Weekday{
    sun=0,
    mon,
    tues,
    wed,
    thurs,
    fri,
    sat
};

int main(int argc, char* argv[])
{

    enum Weekday Sun = sun;
    printf("(%s)(%d): Sun is %d \n", __FUNCTION__, __LINE__, Sun);

    switch(Sun){
        case sun:
            printf("(%s)(%d): Weekday is sun\n", __FUNCTION__, __LINE__);
        break;
        case mon:
            printf("(%s)(%d): Weekday is mon\n", __FUNCTION__, __LINE__);
        break;
        case tues:
            printf("(%s)(%d): Weekday is tues\n", __FUNCTION__, __LINE__);
        break;
        case wed:
            printf("(%s)(%d): Weekday is wed\n", __FUNCTION__, __LINE__);
        break;
        case thurs:
            printf("(%s)(%d): Weekday is thurs\n", __FUNCTION__, __LINE__);
        break;
        case fri:
            printf("(%s)(%d): Weekday is frii\n", __FUNCTION__, __LINE__);
        break;
        case sat:
            printf("(%s)(%d): Weekday is sat\n", __FUNCTION__, __LINE__);
        break;
        default:
            printf("(%s)(%d): default\n", __FUNCTION__, __LINE__);
        break;
    }
    return 0;
}
