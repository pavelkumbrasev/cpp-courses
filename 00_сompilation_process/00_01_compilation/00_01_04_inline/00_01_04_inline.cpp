// How inline affect mangling?
// Show the symbol table

inline int foo() {
    return 0;
}

inline int foo(int first, int second) {
    return 1;
}

int main() {
    foo();
    foo(1, 2);
}
