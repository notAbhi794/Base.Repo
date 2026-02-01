#include <iostream>
using namespace std;

class PrimeChecker {
public:
    void checkPrime(int n) {
        if (n < 0) {
            throw n;   // Throw integer exception
        }

        if (n <= 1) {
            throw "Number is NOT a prime number!";   // Throw string exception
        }

        for (int i = 2; i*i <=n; i++) {
            if (n % i == 0) {
                throw "Number is NOT a prime number!";   // Throw string exception
            }
        }

        cout << n << " is a prime number." << endl;
    }
};

int main() {
    PrimeChecker obj;
    int num;

    cout << "Enter a number: ";
    cin >> num;

    try {
        obj.checkPrime(num);
    }

    catch (const char* msg) {
        cout << "Exception: " << msg << endl;
    }

    catch (int x) {
        cout << "Exception: Negative number entered: " << x << endl;
    }
   

    return 0;
}














// #include<iostream>
// using namespace std;
// class Primecheck{
//     public:
//     int num;

//     void getdata(){
//         cout<<"Enter the number ";
//         cin>>num;
//     }

//     void check(){
//         if(num < 0){
//         throw "Exception : Negative Numbers are not prime";
//         }

//         else if(num<=1){
//         throw "Exception : Not a Prime number";
//         }

//         for(int i= 2; i*i <=num ;i++){
//             if(num%i==0){
//               throw "Exception : Not a Prime Number";
//             }
//         }
//         cout<<num<<"is a Prime Number";
//     }

// };
// int main(){
//     Primecheck p;
//     p.getdata();
//     try{
//         p.check();
//     }
//     catch(const char* msg){
//         cout<<msg;
//     }
// }