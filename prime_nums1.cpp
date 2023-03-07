#include <iostream>

bool isPrime(int);

int main(){
	int num;
	std::cin >> num;
	isPrime(num);

	return 0;
}

bool isPrime(int num){
	std::string t = "true";
	std::string f = "false";
	if((num * num) %24 == 1 || num == 2 || num == 3){
		std::cout << t << std::endl;
		return true;
	}
	else{
		std::cout << f << std::endl;
		return false;

	}
}


