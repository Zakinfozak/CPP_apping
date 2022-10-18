#include <cstdlib>
#include <iostream>

bool is_prime(int x)
{
    if (x==0 || x == 1)
        return false ;
    if (x %2 == 0 || x%3==0){
        return true;
    }
    for ( int i =5; i<x; i++)
    {
        if(x%i == 0 || (x%(i+2)==0))
            return false;
    }
    return true;
}
int main()
{
    int x =  0;
    while(std::cin >>x){
        std::cout<<x<<" is a prime: " ;
        if (is_prime(x)){
            std::cout << "True\n";
        }
        std::cout<<"False\n";
    }
    return 1; 

}
    /*
    if(argc == 1)
        return 1;
    for(int i = 0 ;i < argc;i++)
    {
        int k = atoi(argv[i]);
        if(is_prime(k))
        {
            printf("%d", k);
            printf("%s" ," is a prime: True \n");
            
        }
        else 
        {
            printf("%d",k);
            printf("%s"," is a prime: False \n");
        }
    }
   
    return 0;

}*/