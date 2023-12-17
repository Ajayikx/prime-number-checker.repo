#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int user_number; //number to be tested if its prime
    int loop_counter;
    int is_prime = true;

    // getting a number from the user
    cout<<"ENTER YOUR NUMBER TO CHECKER IF ITS PRIME NUMBER OR NOT  : "<<endl;
    cin>>user_number;

    // checking for prime by testing divisibility
    // by all whole number from 2 to square root of (user number)

    loop_counter=2;
    while (loop_counter<= sqrt(user_number)) // while loop counter is less than or equal to the square root of user number
    {
        if (user_number%loop_counter== 0)
            is_prime = false;
        loop_counter ++;
    }

    if (is_prime)
    {
        cout << "the number you enter is a prime number "<< endl;
    }
    else {
        cout << "the number you enter isn't a prime number"<< endl;
    }


    return 0;
}
