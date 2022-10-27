#include <iostream>
#include <string>


using namespace std;
long long int is_prime(long long int n) 
{
	
  bool is_prime = true;
  
  if (n <= 1) {
    cout << n << " is a prime: False\n";
    return 0;
  }

  for (long long int i = 2; i <= n / 2; ++i) {
    if (n % i == 0) {
        cout << n << " is a prime: False\n";
        return 0;
    }
  }
  
  cout << n << " is a prime: True\n";
  return 0;
}


int main(int argc, char *argv[])
{
    if(argc < 3){
	    return 0}
    
    long long int n;
    
    while (cin >> n) {
        is_prime(n);
    }
    return 0;
}


