#include <iostream>
#include <vector>

typedef std::vector<std::pair<std::string, int>> pairList_t;
typedef std::string text_t;


using num_n = int;
//using is more popular then typedef 

int main(){
    
    pairList_t pairlist;
    text_t name = "king";
    std::cout << name;
    //helps with code readability and reduces  typos
    return 0;
}