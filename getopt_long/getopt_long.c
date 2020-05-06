#include <stdio.h>  
#include <getopt.h>  

char *l_opt_arg;  
//char* const short_options = "nbl:";  
struct option long_options[] = {  
    { "name",           0,   NULL,    'n'     },  
    { "phonenumber",    0,   NULL,    'p'     },  
    { "test",           1,   NULL,    't'     },  
    { "help",           0,   NULL,    'h'     },  
    {      0,           0,     0,     0},  
};  

int main(int argc, char *argv[])  
{  
    int c;  
    //while((c = getopt_long (argc, argv, short_options, long_options, NULL)) != -1)  
    const char *optstring = "npt:h";
    int option_index=0;
    while((c = getopt_long (argc, argv, optstring, long_options, &option_index)) != -1)  
    {  
        switch (c)  
        {  
            case 'n': //it is the same with user input --name
            printf("My name is Nelson.\n");  
            break;  
            case 'p':  
            printf("My phone number is xxxx.\n");  
            break;  
            case 't':  
            l_opt_arg = optarg;  
            printf("This is test from user input %s!\n", l_opt_arg);  
            break;  
            case 'h':
            printf("Support -n\n");
            printf("        -p\n");
            printf("        -t: Need to input parameter\n");
            break;
            default:
            printf(" -h for more help information");
            break;
        }  
    }  
    return 0;  
}  
