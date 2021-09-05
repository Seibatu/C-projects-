#include <iostream>

int main()
{
    float in1, in2;
    char operation; 
    std::cout<<"Enter two numbers:\n";
    std::cin>>in1;
    std::cin>>in2;
    std::cout<<"Enter the operation '+','-','*','/':\n";
    std::cin>>operation; 
    
    std::cout<<"Would you like to\n"<<"1. add the numbers\n"<<"2. subtract the numbers\n";
    std::cout<<"3. multiply the numbers\n"<<"4. divide the numbers\n\n";
    
    switch(operation)
    {
        case'+':
        {
            std::cout<<in1+in2<<"\n";
            
        }
        break;
        case'-':
        {
            std::cout<<in1-in2<<"\n";
            
        }
        break;
        case '*':
        {
            std::cout<<in1*in2<<"\n";
            
        }
        break;
        case'/':
        {
            std::cout<<in1/in2<<"\n";
            
        }
    }
    
    return 0;
}