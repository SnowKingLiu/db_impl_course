#include <unistd.h>

int main() {
//    std::cout << "Hello, World!" << std::endl;
    unlink("/tmp/zzz");
    unlink("/tmp/zzz");
    return 0;
}