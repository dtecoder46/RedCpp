#include <iostream>

using namespace std;

int main() {
    /* Algorithm

    1. Ask the user if they want to sign up or log in

    2. If invalid input, re-prompt until valid

    3. Sign up

        Ask user for username and password
        Encrypt the password
        Store the username and password in a JSON file

    4. Log in

        Ask user for username and password
        Retrieve data from JSON
        Decrypt the password
        Check if the usernames and passwords match
        If they don't match, re-prompt until they match
        If they match, give successful log in message
        
    */

    string action;

    cout << "Welcome to the Basic Website!\n";

    cout << "What do you want to do?\n1. Sign Up\n2. Log In\n";

    cin >> action;
}