#include<iostream>
#include<algorithm>
#include<array>

int main() {
	std::string message = "hello bela man, wa guan";

	std::transform(message.begin(), message.end(), message.begin(), [](char c) {
		return std::toupper(c);
		});

	std::cout << message;
	return 0;
}
