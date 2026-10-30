#define SODIUM_STATIC
#include <sodium.h>
int main() {int flip=randombytes_uniform((uint32_t)2);if(flip!=0){const char tails[]="tails\n";asm volatile ("mov $1,%%rax\n\t""mov $1,%%rdi\n\t""lea %0,%%rsi\n\t""mov $6,%%rdx\n\t""syscall\n\t"::"m"(tails):"%rax","%rdi","%rsi","%rdx");}else{const char heads[]="heads\n";asm volatile("mov $1,%%rax\n\t""mov $1,%%rdi\n\t""lea %0,%%rsi\n\t""mov $6,%%rdx\n\t""syscall\n\t"::"m"(heads):"%rax","%rdi","%rsi","%rdx");}}
