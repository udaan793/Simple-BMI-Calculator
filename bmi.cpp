#include <iostream>

using namespace std;

int main()
{
    float height, weight;
    cout << "Enter Your Height(In meters): ";
    cin >> height;
    cout << "Enter Your Weight(inKg): ";
    cin >> weight;

    float bmi;

    float SqrtOfHeight = height * height;
    bmi = weight / SqrtOfHeight;
    if(bmi < 18.5){
        cout << "Your are Underweight! ";
    }else if(bmi > 18.5 && bmi < 24.9){
        cout << "You are Healthy! ";
    }else if(bmi > 25 && bmi < 29.9){
        cout << "You are overweight! ";
    }else if(bmi > 30){
        cout << "You are Obese! ";
    }
    cout << bmi;
    return 0;



}
