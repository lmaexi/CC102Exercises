#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    const int salesPerson = 4, product = 5;
    double amount = 0;
    int person, products;
    char slip, choice;
    double saleTotal = 0;
    double overallTotal = 0;

    double sales [product][salesPerson] = {0};

    do{
        double amount = 0;
        double saleTotal = 0;
        double overallTotal = 0;

        double sales [product][salesPerson] = {0};

        system("cls");
        cout<<"\tMonthly Sales Summary\n"<<endl;

    do{
        cout<<"Salesperson(1-4): ";
        cin>>person;
        cout<<"Product(1-5): ";
        cin>>products;
        cout<<"Amount: ";
        cin>>amount;

        if (person >=1 && person <=4 && products >= 1 && products <=5){
            sales[products -1][person-1] += amount;
        } else {
            cout<<"Invalid Slip, Do not Exceed the Limit!"<<endl;
        }

        cout<<"Add Another Slip[Y/N]: ";
        cin>>slip;
        cout<<"\n";
    }while(slip == 'y' || slip == 'Y');

    //this is the title and header of the final table
    cout<<"\n\n";
    cout<<"\t\tSalesperson"<<endl;
    cout<<"Product\t";
    for (int i=0; i<salesPerson; i++){
        cout<<i+1<<"\t";
    }
    cout<<"TOTAL"<<endl;

    for (int j=0; j<product; j++){
        saleTotal =0;
        cout<<j+1<<"\t";
        for (int k=0; k<salesPerson; k++){
            cout<<sales[j][k]<<"\t";
            saleTotal += sales[j][k];
        }
        cout<<saleTotal<<endl;
        overallTotal += prodTotal;
    }

    cout<<"Total\t";
    for (int l=0; l<salesPerson; l++){
        double lasTotal = 0;
        for (int m=0; m<product; m++){
            lasTotal += sales[m][l];
        }
        cout<<lasTotal<<"\t";
    }
    cout<<overallTotal<<endl;

    cout<<"\nDo You Want to Try Again[Y/N]: ";
    cin>>choice;
    }while(choice == 'y' || choice == 'Y');


    return 0;
}

