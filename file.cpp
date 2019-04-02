#include <iostream>
#include <fstream>

int main() {
	std::ofstream out("trajectoire.txt");
	for (int i =0;i<501;i++){
		  out << i <<"\t"<< i*i*i <<std::endl;
	}
	out.close();
}
