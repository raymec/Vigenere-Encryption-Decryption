#pragma once
#include <string>

class Vigenere {

public:
	std::string encrypt(std::string& plain_text, std::string& key_text);
	std::string decrypt(std::string& cipher_text, std::string& secret_key);
};