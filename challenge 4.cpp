#include <iostream>

using namespace std;

int main() {
    int n, m, o=1;
    string num[10] = {"Greater than 9", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    cin>>n;
    cin>>m;
    for(int i = n; i <= m; i++){
    	if(i>=1&&i<=9){
			cout<<num[i]<<endl;
		}
		if(i>9){
			if(i%2==0){
				cout<<"even"<<endl;
			}
			else {
				cout<<"odd"<<endl;
			}
		}
	}
    
    return 0;
}
