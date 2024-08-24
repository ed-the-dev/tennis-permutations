#include <iostream>
#include <cmath>

using namespace std;

void sayHam(string title){
    cout << title << "HAM!" << endl;
}

double cube(double num);

int main(){

    // string phrase = "Happy Ham Man!";
    // cout << phrase.find('M') << endl;
    // cout << pow(3, 3) << endl;

    // int age;
    // cout << "Enter your age: ";
    // cin >> age;
    // cout << "You are " << age << " years old!" << endl;

    // string name;
    // cout << "Enter your name: ";
    // getline(cin, name);
    // cout << "Hello " << name << endl;

    // CALCULATOR

    // int num1, num2;
    // cout << "Enter first number: ";
    // cin >> num1;

    // cout << "Enter second number: ";
    // cin >> num2;

    // cout << num1 + num2;

    // ARRAYS

    // int luckyNums[] = {2,3,4,6,7};
    // cout << luckyNums[3];

    sayHam("Mr");

    cout << cube(2);

    return 0;
}

double cube(double num){
    return num * num * num;
}