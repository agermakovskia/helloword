#include <stdio.h>
#include <unistd.h>

int main ( int argc,char** argv)
{
    void* p = null;
    printf("AIS Hello Word!\n");
    if (argc == 3)
        memset(p, 0x00, 0xF);
        
    return 1;
}

