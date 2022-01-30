#include <iostream> 
#include <string>

using namespace std;
string getTask(){
        string task;
        cout << "Enter new task:\n";
        cint >> task;
        return task;
    }

bool updateNeeded(){
    bool update;
    cout << "Do you need to update ToDo?";
    cint >> update;
    return update;
}


int main(){
    int i = 0
    string toDos[10];
    while updateNeeded() == true {
        toDos[i]=getTask();
        i++;
    }
    cout << "Good Day.";
    cout << "anton is gay";
    return 0;
}

