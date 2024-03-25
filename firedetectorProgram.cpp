#include <iostream>
using namespace std;

int gasValue = 0;
int fireValue = 0;

/* 
The gas function utilizes an analog system, 
hence the (seemingly) arbitrary digits it pulls.
*/ 

int gasFunction() {
    if (gasValue > 600) {
        cout << "Gas has been detected. Stay vigilant.";
    } else if (gasValue > 1200) {
        cout << "A breach in a gaseous substance has been detected. Proceed with extreme caution";
    } else {
        cout << "No gas detected within the perimeter.";
    }
}

/*
The fire function makes use of a binary 
system, which explains the reason why 1s and 
0s (fire or no fire) are used here.
*/

int fireFunction() {
    if (fireValue == 1) {
        cout << "Fire has been detected. Evacuate and inform the authorities immediately.";
    } else {
        cout << "No fire detected within the perimeter.";
    }
}
