#include "TodoList.h"

TodoList::TodoList() {
    cout << "in constructor..." << endl;

    ifstream input;
    input.open("TODOList.txt");
    string tempLine;

    if (input.is_open()) {
        while (!input.eof()) {
            getline(input, tempLine);
            tasks.push_back(tempLine);
        }
        input.close();
    }
    else {
        cout << "TODOList.txt could not open" << endl;
    }

}

TodoList::~TodoList () {

    cout << "in destructor..." << endl;

    ofstream output;
    output.open("TODOList.txt");

    for (int i = 0; i < tasks.size(); ++i) {
        output << tasks.at(i);
    }

    output.close();
}

void TodoList::add(string _duedate, string _task) {

    cout << "Adding a task..." << endl;

    tasks.push_back(_duedate);
    tasks.push_back(_task);
}

int TodoList::remove(string _task) {


    cout << "removing a task..." << endl;

    return 0;
}

void TodoList::printTodoList() {

    cout << "Printing to do list..." << endl;

    for (int i = 0; i < tasks.size(); ++i) {
        cout << tasks.at(i) << endl;
    }

}

void TodoList::printDaysTasks(string _date) {

    cout << "Printing tasks on " << _date << endl;

    ifstream input;
    input.open("TODOList.txt");

    string tempLine;

    if (input.is_open()) {
        for (int i = 0; i < tasks.size(); ++i) {
            if (tasks.at(i) == _date) {
                cout << tasks.at(i + 1) << endl;
            }
        }
    }
    else {
        cout << "Could not open TODOList.txt" << endl;
    }
}