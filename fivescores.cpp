//Reads in five scores and shows how much each 2 //score differs from the highest score.
#include <iostream>
using namespace std;
int main( ) 
{
	int i, score[5], max;
	float temp = 0;
	float final = 0;
	float numerator = 0;
	
	cout << "Enter 5 scores:\n";
	cin >> score[0];
	max = score[0];
	for (i = 1; i < 5; i++)
	{
		cin >> score[i];
		temp += score[i];
	}
	
	final = temp / 5;
	cout << final << endl;
	
	int mean = sum/5.0
		for(int j=0; j<5; j++)
			numerator +=(score[j]-mean)*(score[j]-mean);
	cout << sqrt(numerator/4.)<<endl;
	
	return 0;
}