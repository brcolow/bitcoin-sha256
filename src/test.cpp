#include <iostream>
#include <string>
#include "sha256.h"

int main()
{
	SHA256AutoDetect();
	unsigned char hash[32] = {};
	std::string data = "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxy";
    unsigned char out[256];
    SHA256D64(out, (const unsigned char*) data.data(), 8);
	//CSHA256().Write((const unsigned char*) data.data(), data.size()).Finalize(hash);
	std::cout << "Hash: " << std::endl;
	for (int i = 0; i < 32; i++) {
		std::cout << std::hex << (unsigned int) hash[i];
	}
	std::cout << std::endl;
	return 0;
}