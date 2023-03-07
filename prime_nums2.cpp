#include <iostream>

bool isPrime(int);
int nextPrime(int);

int main(){
	int num;
	int var;
	std::cin >> num;
	for(int i = 1; i < 7; i++){
		if(isPrime(num+i)){
			var = num+i;
			std::cout << var << std::endl; 
			break;
		}
	}

	return 0;
}

bool isPrime(int num){
	std::string t = "true";
	std::string f = "false";
	if((num * num) %24 == 1 || num == 2 || num ==3){
		return true;
	}
	else{
		return false;
	}
}

