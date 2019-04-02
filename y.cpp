#include "y.h"

float y (float t, float t1, float t2, float tf, float Vmax){
	float yy;
	if (t<t1){
		yy = 0.5*Vmax/t1*t*t*10e-6; //V en (m/s) et t en (ms)
 	}else if((t>t1) && (t<t2)){
		yy = 0.5*Vmax*t1 + Vmax*(t-t1);		
	}else if (t>t2)
		yy = 0.5*Vmax*t1*10e-6 + Vmax*(t2-t1)*10e-6 - 0.5*Vmax/(tf-t2)*(t-t2)*(t-t2)*10e-6;
	}	
	return (yy);
}
