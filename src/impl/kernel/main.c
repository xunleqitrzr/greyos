#include "print.h"

void kernel_main() {
    print_clear();
    print_set_color(PRINT_COLOR_YELLOW, PRINT_COLOR_BLACK);
    print_str("Welcome to 64-bit Kernel!\n");

    print_set_color(PRINT_COLOR_WHITE, PRINT_COLOR_BLACK);
    print_str("\nWhat is new?\nWe added the 64-bit support to\nto the System.");
    print_str("\nThe new Name of the OS is GreyOS!\n");

    get_input("hla");
}