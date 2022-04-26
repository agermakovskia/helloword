#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main ( int argc,char** argv)
{
    void* p = 0x00;
    printf("AIS Hello Word!\n");
    if (argc == 3)
        memset(p, 0x00, 0xF);
        
    return 0;
}

