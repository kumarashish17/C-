#include<iostream>
using namespace std;
int main(){
    string str;
    cout << "Enter a string: "; 
    getline(cin, str);
    int vowelCount = 0;
    int i=0;
    while(str[i] != '\0'){
        char ch = str[i];
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
           ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
            vowelCount++;
        }
        i++;
    }
    cout << "Number of vowels: " << vowelCount << endl;
}