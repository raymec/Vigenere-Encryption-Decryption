#include <iostream>
#include <string>
#include "vigenere.h"

int main()
{
    Vigenere vignere;

    // ask for user input of plain_text and key
    //std::string plain_text = "my name is john";
    //std::string key_text = "reach";

    std::string plain_text;
    std::string key_text;

    std::cout << "Encrypt this plain text: ";
    std::getline(std::cin, plain_text);
    std::cout << "with key: " << key_text;
    std::getline(std::cin, key_text);

    //---Encrypted---//
    std::string cipher_text = vignere.encrypt(plain_text, key_text);
    std::cout << "Encrypted plain text: " << cipher_text << std::endl;


    //---Decrypted---//
    std::string dec_plain_text = vignere.decrypt(cipher_text, key_text);
    std::cout << "\nDecrypted cipher text: " << dec_plain_text << std::endl;
}
