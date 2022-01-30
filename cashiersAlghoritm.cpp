#include <iostream>
#include <string>
using namespace std;
int main(){
	int ammount;
	int denominations[4]={25,10,5,1};
	int result[4];
	
	string denominationsNames[4]={"quarters","dimes","nickels","pennies"};
	
	cout<<"Please enter ammount to be converted"<<endl;
	cin>>ammount;
	
	for(int i=0;i<4;i++){
		result[i]=ammount/denominations[i];
		ammount=ammount-(ammount/denominations[i])*denominations[i];
	}
	
	for(int i=0;i<4;i++){
		cout<<result[i]<<" "<<denominationsNames[i]<<endl;
	}

	
	return 0;
}
