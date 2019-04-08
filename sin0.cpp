//g++ sin0.cpp -o sin0.o
#include <iostream>
#include <cmath>
int main (){
double PI=3.14159265359;
double rad = 0;
double t, result=0;
	for ( t=0 ; t<=360 ; t = t + 15 )
	{
		rad = t * (PI / 180);
		result = sin(rad);
			std::cout <<t<<"\t"<< result<<"\n";
	}
	return 0;
}
