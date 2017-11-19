#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

int main()
{
    for (int i=1;i<11;i++) {
        
        int array[10];
        int numberOfPancakesEaten;
        int mostPancakesEaten;
        
        cout << "How many pancakes did you eat person #" << i << "? \n" << "Input a Number: "; 
        cin >> numberOfPancakesEaten;
        cout << "I, person #" << i << ", ate " << numberOfPancakesEaten << " pancakes. \n";
        array[i] = numberOfPancakesEaten;
    
        if (array[i] > array[i-1]) {
            mostPancakesEaten = array[i];
        }
        
        cout << "The most pancakes eaten are: " << mostPancakesEaten << " pancakes. \n\n";
    }
        
    return 0;
}

