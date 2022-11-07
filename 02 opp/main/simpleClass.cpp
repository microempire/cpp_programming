#include <iostream>
#include <string>
using namespace std;

class myfish{
    public:
        int temperature;
        int phParameter;
        string waterType;
        string fishName;
};

int main(){

    myfish fish1;

    fish1.temperature = 28;
    fish1.phParameter = 7;
    fish1.waterType = "fresh water";
    fish1.fishName = "Discus";
    cout << "Fish water temperature is : " << fish1.temperature << "°C\n";
    cout << "Fish water parameter is : " << fish1.phParameter << "\n";
    cout << "Fish water type is : " << fish1.waterType << "\n";
    cout << "Fish name  is : " << fish1.fishName << "\n" ;


    myfish fish2;
    
    cout << "enter fish2 name"; 
    cin >> fish2.fishName;

    cout << "enter fish2 temperature:" ;
    cin >> fish2.temperature;

    cout << "enter fish2 watertype: ";
    cin >>  fish2.waterType;

    cout << "enter fish2 PH parameter : ";
    cin >>   fish2.phParameter;


    cout << "Fish water temperature is : " << fish2.temperature << "°C\n";
    cout << "Fish water parameter is : " << fish2.phParameter << "\n";
    cout << "Fish water type is : " << fish2.waterType << "\n";
    cout << "Fish name  is : " << fish2.fishName << "\n";
    std :: cout << "==============================" << "\n" << std :: endl;


    return 0;


    }

