// Work with header guards and without it
// Why is there a mistake without guards?

#include "00_00_02_header_A.h"
#include "00_00_02_header_B.h"

int main() {
    int A_number = A_func();
    int B_number = B_func();

    return 0;
}
