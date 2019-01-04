#include <stdio.h>
#include <ulib.h>

/* try to load the kernel's TSS selector into the DS register */

int
main(void) {
#if defined(__x86_64__) || defined(__x86__)
    asm volatile("movw $0x28,%ax; movw %ax,%ds");
    panic("FAIL: T.T\n");
#endif
}
