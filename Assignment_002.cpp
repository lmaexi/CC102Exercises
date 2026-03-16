#include <iostream>
#include <cstdlib>
using namespace std;

void computeGrade(int *matrix, int student, int subj);

int main(){
    int students, subjects;
    char choice;

    do{
        system("cls");
        cout<<"Enter Number of Student: ";
        cin>>students;
    
        cout<<"Enter Number of Subjects: ";
        cin>>subjects;
    
        int grades[students][subjects];
    
        cout<<"\nENTER STUDENTS GRADE \n"<<endl;
        for(int i=0; i<students; i++){
            cout<<"Student "<<i+1<<endl;
    
            for (int j=0; j<subjects; j++){
                cout<<"Subject "<<j+1<<": ";
                cin>>grades[i][j];
            }
            cout<<endl;
        }
    
        computeGrade(&grades[0][0], students, subjects);

        cout<<"\nDo you want to Input Again?[y/n]: ";
        cin>>choice;

    } while (choice == 'y' || choice == 'Y');

    return 0;
}


void computeGrade(int *matrix, int student, int subj){
    int highest = *(matrix);
    int avrg = 0;

    cout<<"\n\tSTUDENT GRADE MATRIX\n";

    for (int i=0; i<student; i++){
        float sum=0;

        for (int j=0; j<subj; j++){
            int grade = *(matrix + i * subj + j);
            cout<<grade<<"\t";

            sum += grade;

            if (grade > highest){
                highest = grade;
            }
        }
        avrg=sum/subj;

        cout<<" | Student "<<i+1<<" Average : "<<avrg;
        cout<<endl;
    }
}
