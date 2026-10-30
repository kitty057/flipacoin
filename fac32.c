#define SODIUM_STATIC
#include <sodium.h>
int main() {
    int flip=randombytes_uniform((uint32_t)2);
    if(flip!=0) {
        const char tails[]="tails\n";
        asm volatile (
            "mov $1,%%eax\n\t"
            "mov $1,%%edi\n\t"
            "lea %0,%%esi\n\t"
            "mov $6,%%edx\n\t"
            "syscall\n\t"
            :
            :
            "m"(tails)
            :"%eax","%edi","%esi","%edx");
        }
        else {
            const char heads[]="heads\n";
            asm volatile(
                "mov $1,%%eax\n\t"
                "mov $1,%%edi\n\t"
                "lea %0,%%esi\n\t"
                "mov $6,%%edx\n\t"
                "syscall\n\t"
                :
                :"m"(heads)
                :"%eax","%edi","%esi","%edx");
            }
        }
