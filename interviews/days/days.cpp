#include <iostream>
#include <string>

using namespace std;

string solution(string &S, int K) {
    string day[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
    int rem = K % 7;
    int sol = 0;
    for (int i = 0; i < 7; i++){
        if (day[i] == S){
            sol = i + rem;
        }
    }
    if (sol >= 7){ //i didn't write >= but wrote >
        sol = sol % 7; //i wrote sol = sol - 7 at first
    }
    return day[sol]; //line 15, hence seg fault
}

int main (){
    string day = "Sat"; 
    cout << solution(day, 23);
}

