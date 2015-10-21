#include <iostream>
#include <conio.h>

using namespace std;

int main(){

	int day, mon, yr, dd, mm, yy, n, i, k = 0;
	n =1;
	cout << "Enter the day you want to check:(ddmmyyyy) "<< endl;

	cin >>day>>mon>>yr;
	

	dd = 1;
	yy = 1990;
	mm = 1;



	for(yy = 1990; yy <= yr; yy++){

		mm = 1;

			for(mm == 1; mm <= 12; mm++){
				
				
				if (mm == 1 || mm == 3 || mm == 5 || mm == 7 || mm == 8 || mm == 10 || mm == 12)
				{
					i = 31;
				}
				else if (mm == 2)
				{
					if (yy%100 == 0 && yy%400==0)
					{
						i = 29;
					}
					else if (yy % 4 == 0 && yy%100 != 0){
						i = 29;
					}
					else{
						i = 28;
					}
				}
				
					//cout << yy%4;
				
				else{
					i = 30;
				}

				//cout << endl << i <<"\t" << mm;

				dd = 1;

					for(dd = 1; dd<=i; dd++){

						/*if (dd == 1 && n-7 == 1)
						{
							k++;
						}*/

						if (dd == day && mm == mon && yy == yr){
							cout << endl << 7-n;
							//goto DONE;
							cout << k;
						

						if (n>7)						
							n = 1;
						
						else{
						
							n++;
						}


						 
						}
						
					}

				}
	}

		
	//DONE:
	getch();

	}

	//DONE 


	
	//return 0;
	/*
	Jan		31
	Feb 	28/29
	March	31
	April	30
	May		31
	June 	30
	July	31
	Aug		31
	Sept	30
	Oct		31
	Nov		30
	Dec		31

	*/