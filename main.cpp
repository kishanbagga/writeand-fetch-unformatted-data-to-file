#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int main()
{
    char city[15];
    char fname[15];
    cout<<"Enter the file name: ";
    cin>>fname;

    ofstream ofile(fname);
    strcpy(city,"Delhi");
    ofile.write(city,sizeof(city));

    strcpy(city,"Bombay");
    ofile.write(city,sizeof(city));

    strcpy(city,"Nagpur");
    ofile.write(city,sizeof(city));

    ofile.close();

    ifstream ifile(fname);

    ifile.getline(city,sizeof(city));
    cout<<city<<endl;

    ifile.getline(city,sizeof(city));
    cout<<city<<endl;

    ifile.getline(city,sizeof(city));
    cout<<city<<endl;

    ifile.close();

    return 0;
}
