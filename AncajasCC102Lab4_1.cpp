#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int students, quiz;
    double total=0;
    char choice;

    do{
        system("cls");
        cout<<"\tStudent Quiz Averages"<<endl;

        cout<<"Enter Number of Students: ";
        cin>>students;
        cout<<"Enter Number of Quiz: ";
        cin>>quiz;

        cout<<"\n";

        double scores [students][quiz +1];

        for (int i=0; i<students; i++){
            cout<<"Student "<<i+1<<" Scores: ";
            for (int j=0; j<quiz; j++){
            cin>>scores[i][j];

            total+=scores[i][j];
            }
            scores[i][quiz] = total/quiz;
        }

        cout<<"\n";
        cout<<"\nStudent ";
        for (int k=1; k<=quiz; k++){
            cout<<"Q"<<k<<"\t";
        }
        cout<<"Average"<<endl;

        for(int i=0; i<students; i++){
            cout<<i+1<<"\t";
            for (int j=0; j<quiz+1; j++){
                cout<<scores[i][j]<<"\t";
            }
            cout<<endl;
        }

        cout<<"\nDo you want to Repeat[Y/N]: ";
        cin>>choice;
    }while(choice == 'Y' || choice == 'y');

    return 0;
}
