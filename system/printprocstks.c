#include <lab1.h>
#include <thread.h>

inline void printprocstks(int thrid) {
    struct thrent *thread = &thrtab[thrid];
    printf("Proc[%s]. Pid = %d\r\n", thread->name, thrid);
    printf("\tStack:\tBase = 0x%08x\r\n\t\tLen = %d\r\n\t\tLimit = 0x%08x\r\n\t\tStkPtr: 0x%08x\r\n\n", 
        thread->stkbase, thread->stklen, (thread->stkbase - thread->stklen), thread->stkptr);
}
