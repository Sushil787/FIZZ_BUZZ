#include<iostream>

int main(void){
    //FIZZ_BUZZ Algorithm
    int input;
    std::cout<<"input the value you like: "<<std::endl;
    std::cin>>input;
    { 
    if(input%3==0){
        std::cout<<"FIZZ \n";
    }
    else if(input%5==0){
        std::cout<<"BUZZ \n";
    }
    else if(input%15==0){
        std::cout<<"FIZZ_BUZZ";
    }
    else
    {
       std::cout<<input;
    }
    }
}
