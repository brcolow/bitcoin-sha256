#include <iostream>
#include <string>
#include "sha256.h"

int main()
{
	unsigned char hash[32] = {};
	std::string data = "abcdefghijklmnopqrstuvwxyz";
	CSHA256().Write((const unsigned char*) data.data(), data.size()).Finalize(hash);
	std::cout << "Hash: " << std::endl;
	for (int i = 0; i < 32; i++) {
		std::cout << std::hex << (unsigned int) hash[i];
	}
	std::cout << std::endl;
	return 0;
}