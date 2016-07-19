
/* Example: readoption -i information -d 1 & */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>

#define STR_MAXLEN              100
#define SUPPORT_PARAM_MAXNUM    2
#define SUPPORT_PARAM_MAXLEN    SUPPORT_PARAM_MAXNUM*2+1

int debugmode=0;
/*****************************************************************************
 * print usage informations to stderr.
 * 
 *****************************************************************************/
void usage(char * program , char * message ) {
	fprintf(stderr,"%s\n" , message );
	fprintf(stderr,"usage : %s [-i <information>] [-d <0 or 1>]\n", program );
}

void cbnDebug(char *fmt, ...){
#define MAX_MESG_LEN 1024	
	va_list args;
	char text[ MAX_MESG_LEN ];
	
	if (debugmode!=1)
		return;
	
	sprintf( text, "[%d]:", getpid());
	va_start (args, fmt);
	vsnprintf( &text[strlen(text)], MAX_MESG_LEN - strlen(text), fmt, args);
	va_end (args);
	
	printf("%s",text);
	
	return;
}	

/*****************************************************************************
 * get commandline options.
 * 
 * @return 0 on success, < 0 on error.
 *****************************************************************************/
int get_options( int argc, char ** argv ) 
{
    int c = 0;
    char *progname = argv[0];
    char str[STR_MAXLEN] = "";

    printf("argc is %d\n", argc);
    if(argc != SUPPORT_PARAM_MAXLEN){
        usage(progname,"");
        return -1;
    }

    while ( (c = getopt( argc, argv, "i:d:")) != EOF ) {
        switch(c) {
            case 'i':
            if (optarg){
                strncpy(str, optarg, STR_MAXLEN);
                printf("We got the value from option -i is %s\n", str);
            } else {
                return -1;
            }
            break;
            case 'd':
            if (optarg){
                debugmode=atoi(optarg);
                cbnDebug("show the information if we set -d with 1\n");
            } else {
                return -1;
            }
            break;	
            default:
            usage(progname,"");
            return -1;
        }		
    }
    return 0;
}

void main(int argc, char *argv[]){
	
	/* get commandline options.*/
	if(get_options( argc, argv ) < 0 ) {
		exit(1);
	}
	
	return;
}

