#include <iostream>
#include <chrono> 
#include <thread>
#include <string>

using namespace std;

int main() {
    string response;

    cout << "Do you want to print a countdown? (yes/no): ";
    cin >> response;

    if (response == "yes") {
        int duration = 10; 
        while (duration > 0) {
            cout << duration << endl;
            this_thread::sleep_for(chrono::seconds(1)); 
            --duration;
        }
        cout << "Time's up!" << std::endl;
    } else if (response == "no") {
        cout << "Maybe next time!" << endl;
    }

    return 0;
}