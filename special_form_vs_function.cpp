// special form vs function.
#include <iostream>


void if_(int predicate, int true_, int false_)
{
    if(predicate == 0){ std::cout << true_ << std::endl; }
    else{ std::cout << false_ << std::endl; }
}

int Trier(){
    std::cout << "executed..." << std::endl;
    return 4;
}
int main()
{
    int predicate_val{0};
    int true_val{2};
    
    std::cout << "Starting function condition..." << std::endl;
    if_(predicate_val, true_val, Trier());
    
    std::cout << "Starting special-form condition..." << std::endl;
    if(predicate_val == 0){std::cout << true_val << std::endl;}
    else{std::cout << Trier() << std::endl;}

}
