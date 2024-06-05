#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(int argc, char *argv[])
{
    printf("Current memory size: %d\n", memsize());
    void* allocated_mem = malloc(20000);
    printf("Memory size after allocation: %d\n", memsize());
    free(allocated_mem);
    printf("Memory size after release: %d\n", memsize());
    exit(0,"done");
}
