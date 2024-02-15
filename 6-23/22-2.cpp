#include <iostream>
using namespace std;

class student {
    public:
        string Name;
        string Subject;
        double GPA;
            student (string name, string subject, double gpa) {
                Name = name;
                Subject = subject;
                GPA = gpa;
            }
        bool honours () {
            if (GPA >= 5){
                return true;
            }
                return false;
            
        }    
    };
int main ()
{
    student student1("Ram", "arts", 4.5);
    student student2("John", "science", 5.7);

    cout << student2.honours();

    return 0;
}
