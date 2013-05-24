/*
Modified by Vrs-hCk
*/

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

main(int argc, char* argv[])
{
setuid(0);
system(argv[1]);
}
