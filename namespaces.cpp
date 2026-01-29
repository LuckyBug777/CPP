#include <iostream>
namespace first{
    int x = 1;
}
namespace second{
    int x = 100;
}
int main(){
    using namespace first;
    using std::cout;
    std::cout << x;
    std::cout << second::x;
    cout << "HI";
    return 0;
}