#include<iostream>
#include<string>
using namespace std;

int main(){
    double age;
    double bounty;
    string chr;
    double tall;
    cout << "Enter your age: ";
    cin >> age;
    if(age <= 25){
        cout << "Enter your height: ";
        cin >> tall;
        if(tall < 100){
            chr = "Chopper";
        }
        else if(tall < 180){
            chr = "Usopp";
        }
        else {
            cout << "Enter your bounty: ";
            cin >> bounty;
            if(bounty > 1100000000){
                chr = "Zoro";
            }
            else{
                chr = "Sanji";
            }
        }
    }
    else if(age <= 60){
        cout << "Enter your bounty: ";
        cin >> bounty;
        if(bounty > 500000000){
            chr = "Jinbe";
        }
        else{
            chr = "Franky";
        }
    }
    else{
        chr = "Brook";
    }
    cout << "Your character = " << chr;
}