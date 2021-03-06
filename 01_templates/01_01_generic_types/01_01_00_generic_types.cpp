// Class templates
// How can we use type template parameter inside the class
// Does template argument affects the class layout?

#include <iostream>
#include <vector>
#include <string>

template <typename T>
class my_class {
public:
    my_class& operator=(T t) {
        field = t;
        return *this;
    }
private:
    T field;
};

template <typename T>
T foo() {
    return T{};
}

int main() {
    my_class<int> m1;
    my_class<double> m2;
    my_class<std::string> m3;
    my_class<std::vector<int>> m4;

    std::cout << "m1 size: " << sizeof(m1) << std::endl;
    std::cout << "m2 size: " << sizeof(m2) << std::endl;
    std::cout << "m3 size: " << sizeof(m3) << std::endl;
    std::cout << "m4 size: " << sizeof(m4) << std::endl;

    m1 = foo<int>();
    m2 = foo<float>();
    m3 = foo<std::string>();
    m4 = foo<std::vector<int>>();
}
