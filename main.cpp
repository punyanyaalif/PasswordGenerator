#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

string GetPassword(int length){
    string Password = "";
    string Characters = "aquickbrownfoxjumpsoverthelazydogAQUICKBROWNFOXJUMPSOVERTHELAZYDOG0123456789";
    
    int CharSize = Characters.size();
    srand(time(0));
    
    int RandomIndex;

    for(int i=0; i < length; i++){
        RandomIndex = rand() % CharSize;
        Password = Password + Characters[RandomIndex];
    }
    return Password;
};

int main(){
    int length;

    cout << "Enter the length of the password : ";
    cin >> length;

    string pass = GetPassword(length);
    cout << "Generate password : " << pass;

    return 0;
}

