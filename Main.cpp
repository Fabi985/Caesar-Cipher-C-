#include <iostream>
#include <vector>

// Do not use "using namespace std;"
// because it can cause conflicts with other libraries you use
// it is always safer to use the standard resolution operator "::" 
// it is the C++ version of class.method in Python

/*
caeser cipher basically works by shifting each letter in the alphabet by n places
and then decrypting by shifting back n places

a good example is the letter a shifted by 5 places would be f and then f shifted back 5 places would be a

a hint: the modulo operator with the number 26 will come in hand

https://www.geeksforgeeks.org/caesar-cipher-in-cryptography/
*/

// Encryption function 
// recieves the text and the shift key and returns encrypted text
std::string Encrypt(std::string text, int ShiftKey)
{
    std::string result = "";

    // Loops through every character in the text
    for (int i = 0; i < text.length(); i++)
    {
        // Upper case encrypt
        if (isupper(text[i]))
        {
            result += char(int(text[i] + ShiftKey - 65) % 26 + 65);
        }
        // Lower case encrypt
        else
        {
            result += char(int(text[i] + ShiftKey - 97) % 26 + 97);
        }
        
    }
    
    // Returns the encrypted text
    return result;
}

// Decryption function
// Recieves encrypted text and shift key and returns decrypted text
std::string Decrypt(std::string EncryptedText, int ShiftKey)
{
    std::string result = "";

    for (int i = 0; i < EncryptedText.length(); i++)
    {
        if (isupper(EncryptedText[i]))
        {
            result += char(int(EncryptedText[i] - ShiftKey + 65) % 26 + 65);
        }
        else
        {
            result += char(int(EncryptedText[i] - ShiftKey - 97) % 26 + 97);
        }
    }

    return result;
}

int main() 
{
    // Sets the values
    std::string text = "";
    int ShiftKey = 3; 

    // Gets the user input and saves it as text variable
    std::cout << "Enter a phrase you want encrypted: ";
    std::cin >> text; 
    
    // Outputs the User encrypted text and decrypted text
    std::string EncryptedText = Encrypt(text, ShiftKey);
    std::cout << "The Encrypted text: " << EncryptedText << "\n";
    std::cout << "The Decrypted text: " << Decrypt(EncryptedText, ShiftKey);

    return 0;
}