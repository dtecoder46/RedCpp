#include <iostream>

using namespace std;

void add(string username, string password) {
    for (int index = 0; index < password.length(); index++) {
        char character = password[index]; // retrieve password characters
        
        int dec = (int)character; // ASCII to decimal conversion
    }
}

int main() {
    /* Algorithm

    1. Ask the user if they want to sign up or log in

    2. If invalid input, re-prompt until valid

    3. Sign up

        Ask user for username and password
        Encrypt the password
            Loop over password string to get each character
            Convert characters to decimal
            Convert decimal to hex
        Store the username and password in a JSON file

    4. Log in

        Ask user for username and password
        Retrieve data from JSON
        Decrypt the password
        Check if the usernames and passwords match
        If they don't match, re-prompt until they match
        If they match, give successful log in message
        
    */

    int action;

    cout << "\nWelcome to the Basic Website!\n\n";

    cout << "What do you want to do?\n1. Sign Up\n2. Log In\nAnswer: "; // prompts the user to sign up or log in

    cin >> action;

    // prompt validation (cannot check for strings)

    while (action < 1 or action > 2) { // checks for inputs with non-existant options
        cout << "\nNot an option, try again\n\n";

        cout << "What do you want to do?\n1. Sign Up\n2. Log In\nAnswer: "; // prompts the user to sign up or log in

        cin >> action;
    }

    if (action == 1) {
        string username;
        string password;

        cout << "\nEnter your username: ";
        cin >> username;

        cout << "\nEnter your password: ";
        cin >> password;

        add(username, password);
    }
    else if (action == 2) {
        // Log In
    }

}