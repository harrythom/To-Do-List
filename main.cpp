#include <iostream>
#include <string>
#include "TodoList.h"

using namespace std;

int main (int argc, char* argv[]) {

    TodoList* list = new TodoList();

    if (argc > 1) {

        string userCmd = argv[1];

        if (userCmd == "add") {

            if (argc > 3) {
                string inputDate = argv[2];
                string inputTask = argv[3];

                list->add(inputDate, inputTask);
            }
            else {
                cout << "Not enough arguments to add" << endl;
            }
        }
        else if (userCmd == "remove") {

            if (argc > 2) {
                string inputTask = argv[2];

                list->remove(inputTask);
            }
            else {
                cout << "Not enough arguments to remove" << endl;
            }
        }
        else if (userCmd == "printTodoList") {

            list->printTodoList();
        }
        else if (userCmd == "printDaysTasks") {

            if (argc > 2) {
                string inputDate = argv[2];

                list->printDaysTasks(inputDate);
            }
            else {
                cout << "To few arguments to print " << argv[2] << "'s" << " tasks" << endl;
            }

        }
        else {
            cout << "Not a real command" << endl;
        }
    }
    else {
        cout << "Not enough arguments" << endl;
    }

    delete list;

    return 0;
}
