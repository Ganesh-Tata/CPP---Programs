#include<iostream>
namespace first{
    int x=1;
}
namespace secound{
    int x=2;
}
int main()
{
    using namespace first;
    int x=0;
    std::cout<<secound::x;
    return 0;
}
