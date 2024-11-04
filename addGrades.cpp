#include "addGrades.hpp"
// This is the add grades function!
#include <iostream>

using namespace std;

struct student {
	string studentID;
	string assignment;
	double grade;
};

void addGrade(string, string, double);

int main() {

	return 0;
}

/* Pseudeocode:
 * Function: addGrade(string studentID, string assignment, double grade)
 * 			1) Get studentID using getUserInput("Enter Student ID: ")
 * 			2) Get task using getUserInput("Enter Assignment Name: ")
 * 			3) Get grade using getUserInput("Enter Grade: ")
 * 			4) Add the task and grade to the student's record
 */

void addGrade(string studentID, string assignment, double grade) {
	student randomStudent;
	randomStudent.studentID = getUserInput("Enter Student ID: ");
	randomStudent.assignment = getUserInput("Enter Assignment Name: ");
	randomStudent.grade = getUserInput("Enter Grade: ");

}
