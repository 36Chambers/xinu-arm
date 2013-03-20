#include <lab1.h>
#include <thread.h>
#include <ledctrl.h>

void printtos(int stack) {
    int *ptr= stack;
    printf("Stack Pointer: 0x%08x\r\n", ptr);

    int pos;
    for (pos = 0; pos < 6; pos++,ptr++) {
        printf("\tStack Item %d [Addr: 0x%08x] -> %10d [0x%08x]\r\n", pos, ptr, *ptr, *ptr);
    }
}
