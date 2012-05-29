#include <math.h>
#include <iostream>

int main(){
		
		double x = 0 , y = 0 ; 
			
		int trials = 50000 ; 

		int count = 0;
		
		for ( unsigned int i = 0 ; i < trials ; i++ )
		{
			x = ( (rand() + 1) % 100 ) * 0.01 ; 
		
			y = ( (rand() + 2) % 100 ) * 0.01 ; 
			
			#ifdef PRINT 
				std::cout << " x = " << x << " y = " << y << std::endl;
			#endif													
			if ( ( x*x + y*y ) < 1 )
				count++ ;
				
		}
						
		std::cout << "Pi : " <<  ( (double)count * 4 ) / trials << std::endl;
										
		return 0 ;

}
