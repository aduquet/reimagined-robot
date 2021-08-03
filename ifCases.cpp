#include <iostream>

using namespace std;

int main(){
    //string name ="";
    /*
    string name ="Aleja";

    if (name == "Aleja"){
        cout << "Welcome Aleja!";
    }*/

    int time = 20;
    string greetings;
    string greetings2;

    if (time < 12){
        greetings = "Good morning!";
    } else {
        greetings = "Good evening";
    }

    greetings2 = (time < 12) ? "good morning" : "good evening";

    cout << greetings;
    cout << "\n" << greetings2;

return 0;

}