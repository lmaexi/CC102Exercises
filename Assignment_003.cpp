#include <iostream>
#include <cstdlib>
using namespace std;

struct Book {
        string barcode;
        string title;
        int year;
        int rating;
};

void input(Book b[], int n);
void display(Book b[], int n);

int main() {
    int n;
    char choice;

    do{
        system("cls");
        cout<<"Enter number of books: ";
        cin>>n;

        struct Book b[n];

        input(b, n);
        display(b, n);

        cout<<"\nDo you want to try again?[y/n]: ";
        cin>>choice;

    }while (choice == 'y' || choice == 'Y');

    return 0;
}

void input(Book b[], int n) {
    for (int i = 0; i < n; i++) {

        int duplicate;
        do {
            duplicate = 0;

            cout<<"\nBOOK "<<i + 1<<endl;
            cout << "Enter Barcode: ";
            cin >> b[i].barcode;

            for (int j = 0; j < i; j++) {
                if (b[i].barcode == b[j].barcode) {
                    cout << "Barcode Already Exists! Enter again.\n";
                    duplicate = 1;
                }
            }

        } while (duplicate == 1);

        cout<<"Enter Title: ";
        cin.ignore();
        getline(cin, b[i].title);
        cout<<"Enter Year: ";
        cin>>b[i].year;
        cin.ignore();
        cout<<"Enter Rating: ";
        cin>>b[i].rating;
        cin.ignore();
    }
}

void display(Book b[], int n) {
    cout << "\n\tBOOK TABLE\n";

    cout<<"Barcode\tTitle\tYear\tRating\tCategory"<<endl;
    for (int i = 0; i < n; i++) {
        cout<<b[i].barcode<<"\t";
        cout<<b[i].title<<"\t";
        cout<<b[i].year<<"\t";
        cout<<b[i].rating<<"\t";
        if (b[i].rating == 5){
            cout<<"Excellent"<<endl;
        } else if (b[i].rating == 4){
            cout<<"Very Good"<<endl;
        } else if (b[i].rating == 3){
            cout<<"Good"<<endl;
        } else if (b[i].rating == 2){
            cout<<"Fair"<<endl;
        } else if (b[i].rating == 1){
            cout<<"Poor"<<endl;
        } else {
            cout<<"No Rating"<<endl;
        }
    }
}

