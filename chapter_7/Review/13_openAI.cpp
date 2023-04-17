// OPENAI version
// Date : 17 April 2023
#include <iostream>
#include <string>
using namespace std;

struct applicant {
    string name;
    int credit_ratings[3];
};

void f1(applicant *a) {
    cout << "Applicant name: " << a->name << endl;
    cout << "Credit ratings: " << a->credit_ratings[0] << ", " << a->credit_ratings[1] << ", " << a->credit_ratings[2] << endl;
}

const char *f2(const applicant *a1, const applicant *a2) {
    if (a1->credit_ratings[0] > a2->credit_ratings[0]) {
        return a1->name.c_str();
    } else {
        return a2->name.c_str();
    }
}

int main() {
    applicant my_applicant = {"John Smith", {80, 75, 90}};
    applicant applicant1 = {"John Smith", {80, 75, 90}};
    applicant applicant2 = {"Jane Doe", {85, 70, 95}};

    typedef void (*f1_ptr)(applicant *);
    typedef const char *(*f2_ptr)(const applicant *, const applicant *);

    f1_ptr p1 = &f1;
    f2_ptr p2 = &f2;

    p1(&my_applicant);

    const char *result = p2(&applicant1, &applicant2);
    cout << "Applicant with the highest credit rating: " << result << endl;

    f1_ptr ap[5] = {&f1, &f1, &f1, &f1, &f1};

    f2_ptr (*pa)[10];
    f2_ptr arr[10] = {&f2, &f2, &f2, &f2, &f2, &f2, &f2, &f2, &f2, &f2};
    pa = &arr;

    return 0;
}
