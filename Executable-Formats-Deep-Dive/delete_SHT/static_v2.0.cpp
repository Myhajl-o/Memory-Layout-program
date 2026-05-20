extern "C" void _start() {
    const char hello[] = "Hello World\n";
    asm volatile(
        "mov $1, %%rax\n\t"
        "mov $1, %%rdi\n\t"
        "lea %0, %%rsi\n\t"
        "mov $12, %%rdx\n\t"
        "syscall\n\t"
        :
        : "m" (hello)
        : "rax", "rdi", "rsi", "rdx"
    );
    asm volatile(
        "mov $60, %%rax\n\t"
        "mov $0, %%rdi\n\t"
        "syscall\n\t"
        :
        :
        : "rax", "rdi"
    );
}