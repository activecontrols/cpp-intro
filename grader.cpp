// Needed for CLI I/O
#include <iostream>

// Namespaces - learn about them later.
// Basically allows us to access things like std::string without having
// to specify the scope (i.e. string my_str;)
using namespace std;

char grader(int points, int assignments) {
    char letter_grade;

    return letter_grade;
}

// Main function; this is where our execution will start.
int main(int argc, char *argv[]) {
    // Task:
    // Professors at Purdue have rallied together after bonding over a
    // shared disdain for the Brightspace grading UI. You have been tasked in writing
    // a grader function as you nobly volunteered to assist the professors, nerd.
    //
    // The grader will work as follows:
    // Class grades are given by calculating the percentage grade across all assignments
    // (Each assignment is given 100 points so 100 points, 1 assigment would mean 100%)
    // Once the grade has been calculated, use Purdue's letter grading system to get
    // the equivalent letter grade as a char. (A+ will be marked as Z)
    //
    // Once you're done try messing around with the code below to make sure it satisfies
    // edge cases.
    // What happens if a professor accidentally puts 100 points, 0 assignments?
    // How about if the score is above 100%?

    cout << grader(1000, 10) << endl;
}
