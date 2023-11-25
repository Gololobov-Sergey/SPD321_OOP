#include <iostream>

#include"Student.h"
#include"Fraction.h"
#include"Time.h"
#include"Array.h"
#include"String.h"
#include"Area.h"

using namespace std;


void PrintArray(Array a)
{
    a.print();
}


//void Print(String s)
//{
//    s.print();
//}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


    /////// 25.11.2023 ///////

    cout << Area::Square(10) << endl;
    cout << Area::Rectangle(10, 20) << endl;
    cout << Area::getCount() << endl;

    //String s("mama");
    //Print("mama");


    //Student st(12);
    //#1
    /*Array a(10);
    a.setRandom();
    a.print();
    PrintArray(a);*/

    //#2
    /*Array a(10);
    a.setRandom();
    a.print();
    Array b = a;
    b.print();*/

   /* {
        Student st("Oleg", 20, 12);
        Student st1("Oleg", 20, 12);
        st.print();
        cout << st.getCount() << endl;
    }
    cout << Student::getCount() << endl;*/



    /*char* p;
    {
        Student st("Oleg", 20, 12);
        p = st.getName();
    }
    
    cout << p << endl;*/



    /*Time t;
    t.print();

    Time t1(30);
    t1.print();

    Time t2(2, 30);
    t2.print();

    Time t3(1, 30, 30);
    t3.print();*/


    /*Student st("Oleg", 20);
    Student st1;*/
    

    /*int a = 5;
    int b(5);
    int c{ 5 };*/


    /*Fraction f1;
    f1.input();
    Fraction f2;
    f2.input();
    Fraction f3;
    f3.add(f1, f2);
    f3.display();*/



    /////// 18.11.2023 ///////
    //Student st;
    //st.setAge(20);
    //st.setName("Oleg");
    //st.print(); // print(st);
    //cout << st.getName() << endl;

    //Student* st1 = new Student;
    //st1->setAge(33);
    //st1->setName("Olga");
    //st1->print();

    



}
