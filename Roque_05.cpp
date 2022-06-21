#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;

class Vehicle{
	private:
		string Vtype, transmission, Tfuel;
		int Nwheels, Sengine;
		
	public:
		Vehicle(){
			Vtype=transmission=Tfuel="NULL";
			Nwheels=Sengine=0;
		}
		void setVal(){
			cout<<"Enter vehicle type: "; cin>>Vtype;
			cout<<"Enter number of wheels: "; cin>>Nwheels;
			cout<<"Enter engine size: "; cin>>Sengine;
			cout<<"Enter transmission type: "; cin>>transmission;
			cout<<"Enter fuel type: "; cin>>Tfuel;
		}
		void display(){
			cout<<"\nVehicle created with the following details:\n";
			cout<<"Type: "<<Vtype<<"\nNumber of wheels: "<<Nwheels<<"\nEngine size: "<<Sengine;
			cout<<"cc\nTransmission type: "<<transmission<<"\nFuel type: "<<Tfuel;
		}
	
};




int main(){
	Vehicle v1;
	v1.setVal();
	v1.display();
	getch();

	return 0;
}
