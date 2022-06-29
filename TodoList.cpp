#include "TodoList.h"

TodoList::TodoList() {
    cout << "in constructor" << endl;

//    ifstream input;
//    input.open("TODOList.txt");
//    string tempLine;
//    vector <string> tasks;
//
//    if (input.is_open()) {
//        while (!input.eof()) {
//            getline(input, tempLine);
//            tasks.push_back(tempLine);
//        }
//        input.close();
//    }
//    else {
//        cout << "TODOList.txt could not open" << endl;
//    }

}

TodoList::~TodoList () {
    cout << "in destructor" << endl;
}

void TodoList::add(string _duedate, string _task) {
    cout << "Adding a task" << endl;


}

int TodoList::remove(string _task) {
    cout << "removing a task" << endl;

    return 0;
}

void TodoList::printTodoList() {
    cout << "printing to do list" << endl;
}

void TodoList::printDaysTasks(string _date) {
    cout << "printing tasks of a specific day" << endl;
}