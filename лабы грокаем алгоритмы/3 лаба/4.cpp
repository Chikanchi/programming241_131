#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

struct Student {
    char name[50];
};

int compareStudents(const void *a, const void *b) {
    Student *s1 = (Student*)a;
    Student *s2 = (Student*)b;
    return strcmp(s1->name, s2->name);
}

int main() {
    const int n = 5;
    Student students[n] = { {"Ivan"}, {"Anna"}, {"Oleg"}, {"Maria"}, {"Pavel"} };

    cout << "Before:" << endl;
    for (int i = 0; i < n; i++)
        cout << students[i].name << endl;

    qsort(students, n, sizeof(Student), compareStudents);

    cout << "\nAfter:" << endl;
    for (int i = 0; i < n; i++)
        cout << students[i].name << endl;

    return 0;
}
