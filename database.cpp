#include <iostream>

using namespace std;

/* Algorithm

    1. Ask the user if they want to sign up or log in

    2. If invalid input, re-prompt until valid

    3. Sign up

        Ask user for username and password
        Encrypt the password
            Loop over password string to get each character
            Convert characters to decimal
            Convert from decimal to hexadecimal
                Make array of powers of 16
                Loop over array
                    If power of 16 <= base 10, hex digit is the base 10 divided by the power of 16, excluding decimals
                        Round down the division result
                    Subtract (power of 16 * remainder) from the decimal number
                    Repeat with the other powers
        Store the username and password in a JSON file

    4. Log in

        Ask user for username and password
        Retrieve data from JSON
        Decrypt the password
        Check if the usernames and passwords match
        If they don't match, re-prompt until they match
        If they match, give successful log in message
        
    */

string dec_hex(int dec) {
    int p16[4] = {4096, 256, 16, 1};

    string hex;

    for (int index2 = 0; index2 < sizeof(p16)/sizeof(p16[0]); index2++) {

        if (p16[index2] <= dec) {
            int hex_remainder = dec % p16[index2];
            int hex_digit = floor(dec/p16[index2]);
            hex += hex_digit;
            dec -= p16[index2] * hex_remainder;
        }
        else {
            hex += "0";
        }

    }

    return hex;
}

void add(string username, string password) {
    for (int index = 0; index < password.length(); index++) {
        char character = password[index]; // retrieve password characters
        
        int dec = (int)character; // ASCII to decimal conversion

        cout << "\n";
        cout << dec;
        
        string hex = dec_hex(dec);
    }
}

int main() {

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