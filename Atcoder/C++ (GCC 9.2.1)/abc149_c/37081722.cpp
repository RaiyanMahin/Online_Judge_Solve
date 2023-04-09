
/* C++ program to find next prime number of a given number ?

can anyone code and explain it !!

https://www.sololearn.com/Discuss/815900/c-program-to-find-next-prime-number-of-a-given-number
*/


#include <iostream>
using namespace std;
bool isPrime (int); // a function which will tell us if the number is prime (true) or not (false)

int main() {
    int number, i;
    //cout<<"Enter a number\n";
    cin>>number;
    for (i=number; !isPrime(i);i++);
    // this cycle goes until we find a prime number. It starts from the number we entered because we need number that is higher. When the cycle finds a number that is prime, it stops and i has its value.
    cout<<i;
    return 0;
}

bool isPrime (int a)
{
    int counter=0; //counter for numbers which devided by the number give reminder 0 (are divisors of the number)
    for (int i=2; i<=a/2; i++) //we start from 2 because 1 is divisor to all numbers. Also we go to the number devided by 2 because there isn't number higher than this that can be devider and give a integer as a result. For example 6: 6/1=6; 6/6=1 --> this is for all numbers;    6/3=2 but 6/4 is not integer. We do not need to count 6 as a devider or check if the range (6/2..6)
    if (a%i==0) //checking if the number is devisor
    counter++; //if there is a devisor we count it

    if (counter==0) //if the counter is equal to 0 that means the number doesn't have any other integer devisors other than 1 and itself therefore it is a prime number and we retrun true
    return true;
    else //the counter is not 0, which means the number has other devisors other than 1 and itself therefore it is not a prime number
    return false;
}
