#include "vigenere.h"

std::string Vigenere::encrypt(std::string& plain_text, std::string& key_text)
{
    std::string cipher_text = "";
    int n = 0;

    // iterate through the plain_text ascii and add the key_text ascii
    for (int i = 0; i < plain_text.length(); ++i) {
        if (isalpha(plain_text[i])) {
            cipher_text += (((toupper(plain_text[i]) - 'A') + (toupper(key_text[n]) - 'A')) % 26 + 65);
            n++;

        // if all letters of the key_text is exhausted, go back to the first letter
            if (n == key_text.length() - 1) {
                n = 0;
            }
        }
    }

    return cipher_text;
}

std::string Vigenere::decrypt(std::string& cipher_text, std::string& secret_key)
{
    std::string plain_text = "";
    int n = 0;

    // iterate through the plain_text ascii and add the key_text ascii
    // adding 26 after secret_key conversion to normalize the integer (sometimes negative)
    // careful with the brackets or separate variables entirely
    for (int i = 0; i < cipher_text.length(); ++i) {
        if (isalpha(cipher_text[i])) {
            plain_text += (((toupper(cipher_text[i]) - 'A') - (toupper(secret_key[n]) - 'A') + 26) % 26 + 65);
            n++;

            // if all letters of the key_text is exhausted, go back to the first letter
            if (n == secret_key.length() - 1) {
                n = 0;
            }
        }
    }
    return plain_text;
}
