#include <iostream>

using namespace std;

class YouTube{
    public:

    string username;
    int subscribers;
    void makeVideos(string date){
        cout << username << " is making video " << date << "!" << endl;
    }
};

int main(){
    //Object 1

    YouTube codepalace;
    codepalace.subscribers = 100;
    codepalace.username = "Code Palace";
    codepalace.makeVideos("tomorrow"); 
    // Object 2
    YouTube codingFlow;
    codingFlow.subscribers = 1000;
    codingFlow.username = "Coding Flow";

    cout << codepalace.username << "has " << codepalace.subscribers << " subcribers." << endl;
    cout << codingFlow.username << "has " << codingFlow.subscribers << " subcribers." << endl;

    return 0;
}
