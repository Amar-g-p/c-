#include<bits/stdc++.h>
using namespace std;
struct student{
    string name;
    int age;
    char Grade;
};
int main(){
    student myStudent1;
    myStudent1.name = "Amar";
    myStudent1.age = 21;
    myStudent1.Grade = 'A';

    student myStudent2;
    myStudent2.name = "Gouri";
    myStudent2.age = 21;
    myStudent2.Grade = 'B';

    cout << myStudent1.name << " " << myStudent1.age << " " << myStudent1.Grade << "\n";
    cout << myStudent2.name << " " << myStudent2.age << " " << myStudent2.Grade << "\n";

return 0;
}




