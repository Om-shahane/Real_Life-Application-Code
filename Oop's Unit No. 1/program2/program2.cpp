// Unit 1 : program No. 2

// Student attandance Management system

#include<iostream>
#include<string>
using namespace std;

class Student{
    private:
    int rollNo;
    string name;
    int totalDays;
    int presentDays;

    public:
    Student(int r, string n) : rollNo(r),name(n), totalDays(0), presentDays(0){}

    void markAttendance(bool isPresent){
        totalDays++;
        if(isPresent){
            presentDays++;
        }
    }

    double getAttendancePercentage() const{
            if(totalDays == 0){
                return 0.0;
            }
            return (presentDays * 100.0) / totalDays;
        }

        void display() const{
            cout << "\n" <<"Roll : " << rollNo << "\n" << "|Name| : " << name << "\n" << "|Attendance| : " << getAttendancePercentage() << "%"  << "\n" << endl;
        }
    };

int main(){
    Student s1(101, "Rahul");
    Student s2(102, "Priya");
    Student s3(103, "Om");
    Student s4(104, "Ram");
    Student s5(105, "Soham");

    s1.markAttendance(true);
    s1.markAttendance(true);
    s1.markAttendance(true);
    s1.markAttendance(true);

    s2.markAttendance(true);
    s2.markAttendance(true);
    s2.markAttendance(false);
    s2.markAttendance(false);

    s3.markAttendance(true);
    s3.markAttendance(true);
    s3.markAttendance(false);
    s3.markAttendance(true);

    s4.markAttendance(true);
    s4.markAttendance(false);
    s4.markAttendance(false);
    s4.markAttendance(false);

    s5.markAttendance(false);
    s5.markAttendance(false);
    s5.markAttendance(false);
    s5.markAttendance(false);

    cout << "\n" << " === Attendance Report === " << endl;
    s1.display();
    s2.display();
    s3.display();
    s4.display();
    s5.display();
}
