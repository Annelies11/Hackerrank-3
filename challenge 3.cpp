#include <iostream>

using namespace std;

int main() {
    int i[10], jum;
    string num[10] = {"Greater than 9", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    cin>>jum;
    if(jum>9){
        cout<<num[0];
    }
    else if(jum<=9){
        cout<<num[jum];
    }
    
}
