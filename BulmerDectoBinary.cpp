// Mark Bulmer - CSC 234 - 4-28-2022 
// Decimal to Binary Converter

#include <iostream>  
using namespace std;  

int main()  
{  
int decToBinary[10], decimal, value, input;    

cout << "Enter a decimal integer: ";    
cin >> decimal;
input = decimal;   

for (value = 0; decimal > 0; value++)    
{    
decToBinary[value] = decimal % 2;    
decimal = decimal / 2;  
}    
cout << input << " is binary ";    
for (value = value - 1 ; value >= 0 ; value--)    
{    
cout << decToBinary[value];    
}    
}  