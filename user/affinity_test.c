#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(int argc, char *argv[])
{
    //int mask = 5;  // =101b -> cpu 0 + cpu2
    int mask = 3;  // =11b -> cpu 0 + cpu1
    //int mask = 0;  // any cpu
    set_affinity_mask(mask);
    int pid = getpid();

    for(;;){
       printf("PID: %d\n", pid);
       sleep(50);
    }
    exit(0,"affinity test done");
}
