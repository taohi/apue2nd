#include "apue.h"
#include <errno.h>
int main(int argc,char *argv[])
{
    fprintf(stderr,"EACCES:%s\n",strerror(EACCES));
  //  errno = ENOENT;
    errno = ENOMEM;
    perror(argv[0]);
    exit(0);
}
