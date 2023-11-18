#include <iostream>

#include"Student.h"

using namespace std;



int main()
{
    Student st;
    st.setAge(20);
    st.setName("Oleg");
    st.print();
    cout << st.getName() << endl;

    Student* st1 = new Student;
    st1->setAge(33);
    st1->setName("Olga");
    st1->print();

    



}
