#include <stdio.h>  
#include <getopt.h>  

char *l_opt_arg;  
//char* const short_options = "nbl:";  
struct option long_options[] = {  
    { "name",     0,   NULL,    'n'     },  
    { "phonenumber",  0,   NULL,    'p'     },  
    { "test",     1,   NULL,    't'     },  
    {      0,     0,     0,     0},  
};  

int main(int argc, char *argv[])  
{  
    int c;  
    //while((c = getopt_long (argc, argv, short_options, long_options, NULL)) != -1)  
    int option_index=0;
    while((c = getopt_long (argc, argv, "", long_options, &option_index)) != -1)  
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
        }  
    }  
    return 0;  
}  
