#include <iostream>
#include <vector>
#include <math.h>
double meanf(std::vector<double> data){
	double sum=0;
	int numOfElements;
	numOfElements = data.size();
	
	for( int i =0 ; i!= numOfElements; i++){
		sum += data.at(i);
		
	}
	double mean= sum/numOfElements;
	return mean; 
}
double stddev(std::vector<double> data){
	
	double average= meanf(data);
	//standard deviation = sqrt(1/data.size() * (data[i]-average)**2 )
	double sum=0;
	
	for(int i = 0; i<data.size(); i++){
		sum += (data[i]-average)*(data[i]-average);
		
	}
	double deviation= sqrt(sum/data.size());
	return deviation;
	
	
}

int main(){
	int numofelement;
	std::vector<double> data;
	std::cout << "How many elements do you want to add to the vector?    ";
	std::cin >>numofelement;
	if(numofelement < 1){
		std::cout << "Invalid input!";
		return 0;
	}
	for (int j = 1;j< numofelement+1; j++){
		double inp;
		std::cout <<"Type element " << j << "  --->  ";
		std::cin >> inp; 
		data.push_back(inp);
		
	}
	
	std::cout << "Average of the vector : " << meanf(data);"\n";
	std::cout << "\nStandard Deviation of the vector : " << stddev(data);
	return 0;	
}
