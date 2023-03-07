#include <iostream>
#include <string>

int main()
{
	std::string sentence, word, max, min, first_word;
	std::cout << "Please input sentence: " << std::endl;
	std::getline(std::cin, sentence);

	for(int i = 0; sentence[i] != ' '; i++){
		first_word += sentence[i];
		min = first_word;
	}

	for(int i = 0; i < sentence.length(); i++){
		if(sentence[i] != ' ' && sentence[i-1] == ' ')
			word = sentence[i];	
		if(sentence[i] != ' ' && sentence[i-1] != ' '){
			word += sentence[i];
			if(word.length() >= max.length()) max = word;
		}	
	}

	for(int i = 0; i < sentence.length(); i++){
		if(sentence[i] != ' ' && sentence[i-1] != ' '){
			word += sentence[i];
			if(sentence[i+1] == ' ' && word.length() <= min.length()) min = word;
			if(sentence[i+1] == '\0' && word.length() <= min.length()) min = word;
		}
		if(sentence[i] != ' ' && sentence[i-1] == ' '){
			word = sentence[i];
		}
	}

	std::cout << "Word with maxlen is: " << max << std::endl;
	std::cout << "Word with minlen is: " << min << std::endl;
	
	for(int i = 0; i < max.length(); i++){
		for(int j = 0; i < min.length(); j++){
			if(min[i] == max[j]){
				std::cout << min[i] << std::endl;		
			}
		}	
	}

	return 0;
}
