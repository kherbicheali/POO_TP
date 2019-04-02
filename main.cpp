#include "y.h"

int main (){
	float Vmax,t,t1,t2,tf;
	cout << "t = ";
	cin >> t;
	cout << endl;
	cout << "Vmax = ";
	cin >> Vmax;
	cout << "t1 = ";
	cin >> t1;
	cout << "t2 = ";
	cin >> t2;
	cout << "tf = ";
	cin >> tf;
	//cout << "y=" << y(t,t1,t2,tf,Vmax) << endl;
	y(t,t1,t2,tf,Vmax);
	//return 0;
}
