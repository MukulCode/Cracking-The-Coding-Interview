//Triple Step
/*A child is running up a staircase with n steps and can hop 
either 1 step, 2 steps or 3 steps at a time.
Implement a method to count how many possible 
ways the child can run up the stairs.
*/
#include<iostream>
#include<vector>
using namespace std;

//function to display and observe dp array
void display(vector<int> dp){
    for(int i = 0 ; i < dp.size(); i++) {
        cout << dp[i] << " ";
    }cout << endl;
}

int tripleStepRecursive(int n) {
    if(n < 0){
        return 0;
    }else if (n == 0){
        return 1;
    }
    return tripleStepRecursive(n-1) + tripleStepRecursive(n-2) + tripleStepRecursive(n-3);
}

int tripleStepMemoisation(int n, vector<int>& dp) {
    if(n < 0){
        return  0;
    }else if (n == 0){
        return dp[n] = 1;
    }

    if(dp[n] != -1){
        return dp[n];
    }

    int count = tripleStepMemoisation(n-1, dp) + tripleStepMemoisation(n-2, dp) + tripleStepMemoisation(n-3, dp);
    return dp[n] = count;
}


int main () {
    int n;
    cin >> n;
    vector<int> dp(n+1, -1);
    cout << tripleStepRecursive(n) << endl;
    cout << tripleStepMemoisation(n, dp) << endl;
    display(dp);
}