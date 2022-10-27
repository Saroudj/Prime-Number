
#include <iostream>
//#include <bitset>
#include <chrono>
#include<cmath>



//using std::cout;
//using std::endl;
//using std::bitset;
using namespace std;



bool primeChecker(int n) {
    bool is_prime = true;

    // 0 and 1 are not prime numbers
    if (n == 0 || n == 1) {
        is_prime = false;
    }

    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            is_prime = false;
            break;
        }
    }

    return is_prime;
}

void isPrime(int n)
{
    if (n < 0)
    {
        cout << n << " is not positif number";
        return;
    }
    else {
        if (primeChecker(n))
            cout << n << " is a prime number\n";
        else
            cout << n << " is not a prime number\n";
    }
}




int main()
{
    auto start = chrono::steady_clock::now();

    int n = 2;
    
    isPrime(n);
   
    int B = pow(2, n); //number of bits of n
    cout << B << endl;
    //2B==>T^2



    auto end = chrono::steady_clock::now();
    cout << chrono::duration_cast<chrono::nanoseconds>(end - start).count() << " nanoseconds" << endl;
    cout << chrono::duration_cast<chrono::microseconds>(end - start).count() << " microseconds" << endl;
    cout << chrono::duration_cast<chrono::milliseconds>(end - start).count() << " milliseconds" << endl;
    cout << chrono::duration_cast<chrono::seconds>(end - start).count() << " seconds";
    return 0;
}
