#include <iostream>
using namespace std;

class Student {
    private:
        string id;
        float mathScore;
        float englishScore;

    public:
        void inputScores() {
            cout << "請輸入學號: ";
            cin >> id;
            cout << "請輸入數學成績: ";
            cin >> mathScore;
            cout << "請輸入英文成績: ";
            cin >> englishScore;
        }

        void displayResults() {
            float totalScore = mathScore + englishScore;
            float averageScore = totalScore / 2;

            cout << "總分: " << totalScore << endl;
            cout << "平均成績: " << averageScore << endl;
        }
};

int main() {
    Student student;

    student.inputScores();
    student.displayResults();

    return 0;
}
