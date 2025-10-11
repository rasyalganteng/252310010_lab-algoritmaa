#include <iostream>
using namespace std;

int main()
{
	float jarak,total=0, ongkos=0;
	
	cout << "Jarak yang di tempuh : " ;
	cin >> jarak;
	
	if (jarak >=0 && jarak<=5 ){
		ongkos = 5000;
			
	}else {
	 if(jarak >=5){
	 	ongkos = 10000;
	 }
	 else{
	 	jarak = 10;
	 	ongkos = 10000 + 2000;
	 }
	 
	 total = ongkos + 2000;
	 
	 cout << "Anda mendapatkan Rp : " << ongkos <<total << endl;
	 
	}
	
	
}
