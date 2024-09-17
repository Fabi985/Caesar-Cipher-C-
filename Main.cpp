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

int main() {
    // Encrypts from char to int
    char a = 'z';
    int ia = (int)a - 96; 

    std::cout << ia;

    // Decrypts from int to char
    int b = 1 + 96;
    char ib = (char)b;

    std::cout << ib;

    // The message i want to encrypt
    std::string plaintext = "Hello world!";

    // declare the array
    std::vector<char> arr;      // Not sure what data type you want to store in here

    // For loop the plaintext and turn each char into an integer whilst appending each int to the array

    // For loop again the array and add the key number to the stored nums
}