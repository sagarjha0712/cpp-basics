#include <bits/stdc++.h> 
using namespace std;

/* void farenhietToCelcius(int n){
    float tempInCelcius = ((n-32)*5)/9;
    cout <<fixed<<setprecision(1)<< tempInCelcius;
 */
//celcius to farenheit
void celciusToFarenhiet(int n){
    float tempInFarenhiet = (n*9/5)+32;
    cout <<fixed<<setprecision(2)<< tempInFarenhiet;


}
 
int main(){
    //farenhietToCelcius(77);
    celciusToFarenhiet(73);
    return 0;
}
