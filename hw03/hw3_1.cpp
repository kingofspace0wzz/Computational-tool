#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int zip;
	int code[5];
	bool more = true;
	while(more){
		cout << "Please enter zip code: " << endl;
		cin >> zip;
		for (int i = 4; i >= 0; i--){
			code[i] = zip % 10;
			zip /= 10;
		}
		cout << "|";
		for (int i = 0; i < 5; ++i)
		{
			switch(code[i]){
        		case 1:
        			cout << ":::||";
        			continue;
        		case 2:
        			cout << "::|:|";
        			continue;
        		case 3:
        			cout << "::||:";
        			continue;
        		case 4:
        			cout << ":|::|";
        			continue;
        		case 5:
        			cout << ":|:|:";
        			continue;
        		case 6:
        			cout << ":||::";
        			continue;
        		case 7:
        			cout << "|:::|";
        			continue;
        		case 8:
        			cout << "|::|:";
        			continue;
        		case 9:
        			cout << "|:|::";
        			continue;
        		case 0:
        			cout << "||:::";
        			continue;
			}
		}
		cout << ":::|||" << endl;
		
	}
}