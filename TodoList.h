#ifndef TO_DO_LIST_TODOLIST_H
#define TO_DO_LIST_TODOLIST_H

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "TodoListInterface.h"

using namespace std;

class TodoList : public TodoListInterface {

public:

    vector <string> tasks;

    TodoList ();

    virtual ~TodoList ();

    /*
    *   Adds an item to the todo list with the data specified by the string "_duedate" and the task specified by "_task"
    */
    virtual void add(string _duedate, string _task);

    /*
    *   Removes an item from the todo list with the specified task name
    *
    *   Returns 1 if it removes an item, 0 otherwise
    */
    virtual int remove(string _task);

    /*
    *   Prints out the full todo list to the console
    */
    virtual void printTodoList ();

    /*
    *   Prints out all items of a todo list with a particular due date (specified by _duedate)
    */
    virtual void printDaysTasks(string _date);

};

#endif