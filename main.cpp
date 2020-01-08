#include <iostream>

using namespace std;

/**
 * @param current The current number
 * @param limit The limit till which we continue
 * @param multipleForFirzz When to print Fizz
 * @param multipleForBuzz When to print Buzz
 */
void fizzBuzzRecursive( int current, int limit, int multipleForFizz = 3, int multipleForBuzz = 5);

int main()
{
    int limit = 0;
    cout<<"Please, enter number to which to go through:"<<endl;
    cin>>limit;

    while(!cin.good()) {
        cin.clear();
        cin.ignore();
        cout<<"Please, enter number to which to go through:"<<endl;
        cin>>limit;
    }

    cout<<endl;
    fizzBuzzRecursive(1, limit);
}

/**
 * @param current The current number
 * @param limit The limit till which we continue
 * @param multipleForFirzz When to print Fizz
 * @param multipleForBuzz When to print Buzz
 */
void fizzBuzzRecursive( int current, int limit, int multipleForFizz, int multipleForBuzz)
{
    if(current > limit) {
        return;
    }

    bool isEitherFizzBuzz = false;
    if(current % multipleForFizz == 0) {
        cout << "Fizz";
        isEitherFizzBuzz = true;
    }

    if(current % multipleForBuzz == 0) {
        cout << "Buzz";
        isEitherFizzBuzz = true;
    }

    if(!isEitherFizzBuzz) {
        cout << current << endl;
    } else {
        cout << endl;
    }

    fizzBuzzRecursive(++current, limit);
}
