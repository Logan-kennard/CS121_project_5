#include <iostream>
#include <fstream>
#include <sstream>

int main(){
	std::ifstream inFile;
	std::string currentline;
	std::stringstream converter;
	std::stringstream ss;
	std::string sNum1;
	std::string sNum2;
	std::string text;

	int sNum1;
	int sNum2
	int sum;

	inFile.open("data.cvs");
	while(getline(inFile, currentline)){
		ss.clear();
		ss.str("");
		converter.clear();
		converter.str("");

		ss.str(currentline);
		
		getline(converter, sNum1, ',');
		getline(converter, sNum2, ',');
		getline(converter, text);

		converter<< sNum1<<" "<< sNum2;
		converter<< num1 >>num2;

		int sum= num1 + num2;

		for(int i=0; i <=sum; i++0{
				std::cout << text << " ";
		}

		std::cout<< std::endl;
	}
		inFile.close();
}



