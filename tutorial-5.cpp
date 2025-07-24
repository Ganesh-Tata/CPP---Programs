#include<iostream>
#include<vector>
//typedef std::vector<std::pair<std::string , int>>pairlist_t;
typedef std::string text_t;
typedef int number_t;
int main()
{
    text_t firstName="Bro";
    number_t age=20;
    std::cout<<age<<'\n';
    std::cout <<firstName<<'\n';
    return 0;
}

#include<iostream>
#include<vector>
//typedef std::vector<std::pair<std::string , int>>pairlist_t;
//typedef std::string text_t;
//typedef int number_t;
using text_t=std::string;
using number_t=int;
int main()
{
    text_t firstName="Bro";
    number_t age=20;
    std::cout<<age<<'\n';
    std::cout <<firstName<<'\n';
    return 0;
}
