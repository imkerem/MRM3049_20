#include<iostream>
using namespace std;

class Tatlilar{
	
	float Seker_orani;
	float Sut_orani;
	
	
public: 
       
	float seker_orani(){ return Seker_orani;}
	float sut_orani()   { return Sut_orani;}
	
	
	
 bool oranlar(float a,float b);

 
};

bool Tatlilar :: oranlar(float a, float b) {
	
	if (a <  0.60) return false;
	if (b <  0.50) return false; 
	
 Seker_orani =a;
 Sut_orani =b; 	
 
return true;	
	
}



int main() {
	
	 Tatlilar tatli;
	 Tatlilar tiramisu[10];
	 Tatlilar *sutlac;
	 
	 sutlac = &tatli;
	
	
	tatli.oranlar(0.70, 0.82);
	cout<<"Seker Orani:"<<tatli.seker_orani()<<endl;
	cout<<"Sut Orani:"<<tatli.sut_orani()<<endl;
	
cout<<"-----------------------------"<<endl;

	
	sutlac->oranlar(0.73,0.58);
	cout<<"Sutlacin Seker Orani:"<<sutlac->seker_orani()<<endl;
	cout<<"Sutlacin Sut Orani:"<<sutlac->sut_orani()<<endl;
	
cout<<"-----------------------------"<<endl;


    tiramisu[10].oranlar(0.86,0.94);
    cout<<"Tiramisunun Seker Orani:"<<tiramisu[10].seker_orani()<<endl;
	cout<<"Tiramisunun Sut Orani:"<<tiramisu[10].sut_orani()<<endl;
		
	
	
	return 0;
}
