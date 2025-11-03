#include <iostream>
using namespace std;
class student{
    int stdid,marks;
    const char* name;
    const char* gender;
    public:
    void Studentid(int s){
        stdid=s;
    }
     void Marks(int m){
        marks=m;
        void Name(const char* n){
            name = n;
        }
        void Gender(const char* g){
            gender = g;
        }
        void Calculategrade(int m){
            if (marks > 90){
                cout << "A Grade";
            }
            else if (marks > 80 && marks <= 90){
                cout << "B Grade";
            }
            else if (marks > 60 && marks <= 80){
                cout << "C Grade";
            }
            else{
                cout << "D Grade";
            }
        }
        void Displaydetails(){
            cout << "The Id of the student is: " << stdid << endl;
            cout << "The name of the student is: " << name << endl;
            cout << "The Gender of the student is: " << gender << endl;
            cout << "The Grade of the student is: ";
            Calculategrade(marks);
            cout << endl;
        }
    };

int main() {
    student s1;
    s1.Studentid(101);
    s1.Name("Hari");
    s1.Gender("Male");
    s1.Calculategrade(100);
    s1.Displaydetails(100, 101, "Hari", "Male");
    s1.Displaydetails();
    return 0;
}
