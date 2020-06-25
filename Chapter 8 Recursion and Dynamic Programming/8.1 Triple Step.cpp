//Triple Step
/*A child is running up a staircase with n steps and can hop 
either 1 step, 2 steps or 3 steps at a time.
Implement a method to count how many possible 
ways the child can run up the stairs.
*/
#include<iostream>
using namespace std;

int tripleStepRecursive(int n) {
    if(n < 0){
        return 0;
    }else if (n == 0){
        return 1;
    }
    return tripleStepRecursive(n-1) + tripleStepRecursive(n-2) + tripleStepRecursive(n-3);
}

int main () {
    int n;
    cin >> n;
    cout << tripleStepRecursive(n) << endl;
}