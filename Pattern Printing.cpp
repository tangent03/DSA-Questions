					//Om Namah Shivaye
					//Jai Shree Ram
					//Jai Bajrang Bali
					
					
					

//Queston :- Here are the questions on Pattern Printing 
//Asked in Companies :- Service Based Companies (TCS...)



/*
For Printing any pattern we should Remember the Following 4 Steps;

1.For the Outer loop , Count the Number of Lines (ROWS)
2.For the Inner Loop , focus on the columns and connect them somehow to the Rows.
3.Print the Character or sign(*) inside the Inner  Loop.
4.Observe the Symmetry (OPTIONAL).

*/






#include <bits/stdc++.h>
using namespace std;


// =================================================
void Print1(int n){
// ------------------------------------------------
	//Pattern1: https://bit.ly/3QfK2k3


					/*
					*****
					*****
					*****
					*****
					*****
					*/
					
// -----------------------------------------------					
					
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cout<<"* ";
			}
			cout<<endl;
		}	
		
	}
// =================================================

void Print2(int n){
//	Pattern2: https://bit.ly/3VADLAt

							/*
							
							*
							* *
							* * *
							* * * *
							* * * * *
							
							*/
							
		for(int i=0;i<n;i++){
			for(int j=0;j<=i;j++){
				cout<<"* ";
			}
			cout<<endl;
		}
}

// =====================================================

void Print3(int n){
	
//	Pattern3: https://bit.ly/3CiWV74

								/*
								
								1
								1 2
								1 2 3
								1 2 3 4
								1 2 3 4 5
								
								*/
								
			for(int i=1;i<=n;i++){
				for(int j=1;j<=i;j++){
					cout<<j<<" ";
				}
				cout<<endl;
			}					
}


// ======================================================

void Print4(int n){
	
//	Pattern4: https://bit.ly/3Gzv70S



				/*
				
				1
				2 2
				3 3 3
				4 4 4 4
				5 5 5 5 5
				
				*/

						
			for(int i=1;i<=n;i++){
				for(int j=1;j<=i;j++){
					cout<<i<<" ";
				}
				cout<<endl;
			}	


}




// ======================================================

void Print5(int n){
	
//	Pattern5: https://bit.ly/3WXGSDD



				/*
				
				* * * * * 
				* * * * 
				* * * 
				* * 
				* 

				
				
				*/

						
			for(int i=1;i<=n;i++){
				for(int j=1;j<=n-i+1;j++){
					cout<<"* ";
				}
				cout<<endl;
			}	


}


// ======================================================

void Print6(int n){
	
//	Pattern6: https://bit.ly/3i06XDu



				/*
				
				1 2 3 4 5
				1 2 3 4
				1 2 3 
				1 2
				1
				
				
				*/

						
			for(int i=1;i<=n;i++){
				for(int j=1;j<=n-i+1;j++){
					cout<<j<<" ";
				}
				cout<<endl;
			}	


}



// ======================================================

void Print7(int n){
	
//	Pattern7: https://bit.ly/3GzvAAa



				/*
				    *    
				   ***   
				  *****  
				 ******* 
				*********
				
				
				*/
				
				
/*
Explaination :-
space =-
star=*

0 --->       *              {4,1,4}
1 --->	 	***   		    {3,3,3}
2 --->	   *****  			{2,5,2}
3 --->	  ******* 			{1,7,1}
4 --->	 *********			{0,9,0}


space = n-i-1
star =2*i+1


*/

						
			for(int i=0;i<n;i++){
				//space 
				for(int j=0;j<n-i-1;j++){
					cout<<" ";
				}
				
				//star
				for(int j=0;j<2*i+1;j++){
					cout<<"*";
				}
				
				//space
				for(int j=0;j<n-i-1;j++){
					cout<<" ";
				}
				
				cout<<endl;
				
			}
			
			
}



// ======================================================

void Print8(int n){
	
//	Pattern8: https://bit.ly/3IqmG9k



				/*
				 *********
				  ******* 
				   *****  
				    ***   
				     *    
				
				
				*/
				
				
/*
Explaination :-
space =-
star=*

0 --->    *********             {0,9,0}
1 --->	   *******   		    {1,7,1}
2 --->	    *****  				{2,5,2}
3 --->	     *** 				{3,3,3}
4 --->	 	  *					{4,1,4}


space = n-i-1
star =2n - (2i+1);


*/

			

						
			for(int i=0;i<n;i++){
				//space 
				for(int j=0;j<i;j++){
					cout<<" ";
				}
				
				//star
				for(int j=0;j<2*n -(2*i+1);j++){
					cout<<"*";
				}
				
				//space
				for(int j=0;j<i;j++){
					cout<<" ";
				}
				
				cout<<endl;
				
			}
			
			
}



// ======================================================

void Print9(int n){
	
//	Pattern9: https://bit.ly/3GyUIHp



				/*
				    *    
				   ***   
				  *****  
				 ******* 
				*********
				
				
				*/
				
				
/*
Explaination :- combine both codes
space =-
star=*
					*    
				   ***   
				  *****  
				 ******* 
				*********
	0 --->      *********             {0,9,0}
	1 --->	     *******   		    {1,7,1}
	2 --->	      *****  				{2,5,2}
	3 --->	       *** 				{3,3,3}
	4 --->	   	    *					{4,1,4}


space = n-i-1
star =2n - (2i+1);


*/

			for(int i=0;i<n;i++){
				//space 
				for(int j=0;j<n-i-1;j++){
					cout<<" ";
				}
				
				//star
				for(int j=0;j<2*i+1;j++){
					cout<<"*";
				}
				
				//space
				for(int j=0;j<n-i-1;j++){
					cout<<" ";
				}
				
				cout<<endl;
				
			}

						
			for(int i=0;i<n;i++){
				//space 
				for(int j=0;j<i;j++){
					cout<<" ";
				}
				
				//star
				for(int j=0;j<2*n -(2*i+1);j++){
					cout<<"*";
				}
				
				//space
				for(int j=0;j<i;j++){
					cout<<" ";
				}
				
				cout<<endl;
				
			}
			
			
}

//=========================================================

void Print10(int n){
	
//	Pattern10: https://bit.ly/3WZoytT



				/*
				
				
				    *
					**
					***
					****
					*****
					****
					***
					**
					*
					
				
				
				*/
				
				
/*
Here We will give the Value to stars variable and store the number
total rows=9 = 2*n-1;


*/

		for(int i=1;i<=2*n-1;i++){
			int stars=i;
			if(i>n){
				stars=2*n-i;
			}
			for(int j=1;j<=stars;j++){
				cout<<"*";
			}
			cout<<endl;
		}
			
}

//===================================================


void Print11(int n){
	
//	Pattern11: https://bit.ly/3WLiUvW



				/*
				
				
				1
				01
				101
				0101
				10101
				
					
				
				
				*/
				
				
/*
Here We will give the Value to stars variable and store the number
total rows=9 = 2*n-1;


*/

		int	start=1;
		for(int i=0;i<n;i++){
			if(i%2==0){
				start=1;
			}
			else{
				start=0;
			}
			for(int j=0;j<=i;j++){
				cout<<start;
				start = 1-start;	
			}
			cout<<endl;
		}
			
}



//==============================================================



void Print12(int n){
	
//	Pattern12: https://bit.ly/3jDVVnD



				/*
				
				
		1        1
		12      21
		123    321
		1234  4321
		1234554321

					
				
				
				*/
				
				
/*
Here We will give the Value to stars variable and store the number
total rows=9 = 2*n-1;


*/
		for(int i=1;i<=n;i++){
			//numbers
			for(int j=1;j<=i;j++){
				cout<<j;
			}
			
			//space
			for(int j=1;j<=2*n-2*i;j++){
				cout<<" ";
			}
			
			//numbers
			for(int j=i;j>=1;j--){
				cout<<j;
			}
			cout<<endl;
		}
}

//=======================================================================


void Print13(int n){
	
//	Pattern13: https://bit.ly/3WWQ1wb



				/*
				
				
					1 
					2 3 
					4 5 6 
					7 8 9 10 
					11 12 13 14 15 
					
					
					
				
				
				*/
				
				
/*
Here We will give the Value to stars variable and store the number
total rows=9 = 2*n-1;


*/
	int num=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<num<<" ";
			num++;
		}
		cout<<endl;
	}
}

//============================================================================




void Print14(int n){
	
//	Pattern14: https://bit.ly/3GyWCYs



				/*
				
				
					A 
					A B 
					A B C 
					A B C D 
					A B C D E 

					
				
				
				*/
				
				
/*
Here We will give the Value to stars variable and store the number
total rows=9 = 2*n-1;


*/
	for(int i=1;i<=n;i++){
		for(char j='A'; j<'A'+i;j++){
			cout <<j<<" ";
		}
		cout<<endl;
	}
}

//======================================================


void Print15(int n){
	
//	Pattern15: https://bit.ly/3X1i8KC



				/*
				
				
				A B C D E 
				A B C D 
				A B C 
				A B 
				A 

				
				
				*/
				
				
/*
Here We will give the Value to stars variable and store the number
total rows=9 = 2*n-1;


*/
	for(int i=1;i<=n;i++){
		for(char j='A';j<'A' + (n-i+1);j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}
}


//======================================================


void Print16(int n){
	
//	Pattern16: https://bit.ly/3G9gq3g



				/*
				
				
					A 
					A B 
					A B C 
					A B C D 
					A B C D E 

					
				
				
				*/
				
				
/*
Here We will give the Value to stars variable and store the number
total rows=9 = 2*n-1;


*/
	for(int i=0;i<n;i++){
		char ch ='A' +i;
		for(int j=0;j<=i;j++){
			cout<<ch<<" ";
		}
		cout<<endl;
	}
}


//======================================================


void Print17(int n){
	
//	Pattern17: https://bit.ly/3jJ7CcR



				/*
				
					    A     
					   A B A    
					  A B C B A   
					 A B C D C B A  
					A B C D E D C B A 
					
				
				*/
				
				
/*
Here We will give the Value to stars variable and store the number
total rows=9 = 2*n-1;


*/
for(int i=0;i<n;i++){
	
	//space
	for(int j=0;j<n-i-1;j++){
		cout<<" ";
	}
	char ch='A';
	int breakpoint = (2*i+1) / 2;
	//characters
	for(int j=1;j<=2*i+1;j++){
		cout<<ch;
		if(j<=breakpoint){
			ch++;
		}
		else{
			ch--;
		}
	}
	//space
	for(int j=0;j<n-i-1;j++){
		cout<<" ";
		}
		
		cout<<endl;
	
	}
}	

//=========================================================


void Print18(int n){
	
//	Pattern18: https://bit.ly/3Z3scot



				/*
				
						E 
						D E 
						C D E 
						B C D E 
						A B C D E 

				
				*/
				
				
/*
Here We will give the Value to stars variable and store the number
total rows=9 = 2*n-1;


*/

/*
	for(int i=0;i<n;i++){
		for(char ch='E'-i;ch<='E';ch++){
			cout<<ch<<" ";
		}
		cout<<endl;
	}

*/

	  for(int i=1;i<=n;i++){
		char ch ='A'+n-1;
		for(int j=0;j<i;j++){
			cout<<ch--<<" ";
		}
		cout<<endl;
	}

}	

//=========================================================


void Print19(int n){
	
//	Pattern19: https://bit.ly/3QfKij1



				/*
				
						**********
						****  ****
						***    ***
						**      **
						*        *
						*        *
						**      **
						***    ***
						****  ****
						**********

				
				*/
				
				
/*
Here We will give the Value to stars variable and store the number
total rows=9 = 2*n-1;


*/


int space=0;
for(int i=0;i<n;i++){
	//stars
	for(int j=1;j<=n-i;j++){
		cout<<"*";
	}
	
	//space
	for(int j=0;j<space;j++){
		cout<<" ";
	}
	//stars
	for(int j=1;j<=n-i;j++){
		cout<<"*";
	}
	
	space=space+2;
	
	cout<<endl;
	
}

int spaces=2*n-2;
for(int i=1;i<=n;i++){
	//stars
	for(int j=1;j<=i;j++){
		cout<<"*";
	}
	
	//space
	for(int j=0;j<spaces;j++){
		cout<<" ";
	}
	//stars
	for(int j=1;j<=i;j++){
		cout<<"*";
	}
	
	spaces=spaces-2;
	
	cout<<endl;
	
}


}	



//=========================================================


void Print20(int n){
	
//	Pattern19: https://bit.ly/3QfKij1



				/*
				
						1
						12
						1 3
						1  4
						1   5
						1    6
						1     7
						12345678
						
				
				*/
				
				
/*
Here We will give the Value to stars variable and store the number
total rows=9 = 2*n-1;


*/

		for(int i=0;i<n;i++){
			for(int j=0;j<=i;j++){
				if(i==j || i==n-1 || j==0){
					cout<<j+1;
				}
				else{
					cout<<" ";
				}
				
			}
			cout<<endl;
		}
		
		

}	



//=========================================================


void Print21(int n){
	
//	Pattern19: https://bit.ly/3QfKij1



				/*
				
						*        *
						**      **
						***    ***
						****  ****
						**********
						****  ****
						***    ***
						**      **
						*        *
						
										
				*/
				
				
/*
Here We will give the Value to stars variable and store the number
total rows=9 = 2*n-1;


*/
		int spaces=2*n-2;
		
		for(int i=1;i<=2*n-1;i++){
			//stars
			int stars=i;
			if(i>n){
				stars=2*n-i;
			}
			for(int j=1;j<=stars;j++){
				cout<<"*";
			}
			//spaces
			for(int j=1;j<=spaces;j++){
				cout<<" ";
			}
			//stars
			for(int j=1;j<=stars;j++){
				cout<<"*";
			}
			cout<<endl;
			if(i<n){
				spaces=spaces-2;
			}
			else{
				spaces=spaces+2;
			}
		}
		

}	


//=========================================================


void Print22(int n){
	
//	Pattern19: https://bit.ly/3QfKij1



				/*
				
						*        *
						**      **
						***    ***
						****  ****
						**********
						****  ****
						***    ***
						**      **
						*        *
						
										
				*/
				
				
/*
Here We will give the Value to stars variable and store the number
total rows=9 = 2*n-1;


*/
		for(int i=0;i<2*n-1;i++){
			for(int j=0;j<2*n-1;j++){
				int top=i;
				int left=j;
				int right = (2*n-2) - j;
				int bottom = (2*n-2) - i;
				cout<<n-min(min(right,left),min(top,bottom));
			}
			cout<<endl;
		}

}	


int main(){
	
// ===============================================	
	
	//Pattern1: https://bit.ly/3QfK2k3
/*

	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n;
		cin>>n;
		Print1(n);
	}
	
*/	
// ================================================	
	
	
	//	Pattern2: https://bit.ly/3VADLAt
/*
z
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n;
		cin>>n;
		Print2(n);
	}


*/

//====================================================

	//	Pattern3:  https://bit.ly/3CiWV74

/*
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n;
		cin>>n;
		Print3(n);
	}

*/
// ====================================================


	//	Pattern4: https://bit.ly/3Gzv70S
/*

	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n;
		cin>>n;
		Print4(n);
	}


*/

// ====================================================


	//	 Pattern5: https://bit.ly/3WXGSDD
/*

	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n;
		cin>>n;
		Print5(n);
	}


*/

// ====================================================




//	 Pattern6: https://bit.ly/3i06XDu
/*

	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n;
		cin>>n;
		Print6(n);
	}


*/

// ====================================================

//	 Pattern7: https://bit.ly/3GzvAAa
/*

	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n;
		cin>>n;
		Print7(n);
	}


*/

// ====================================================


//	 Pattern8: https://bit.ly/3IqmG9k
/*

	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n;
		cin>>n;
		Print8(n);
	}



*/
// ====================================================

//	 Pattern9: https://bit.ly/3GyUIHp
/*

	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n;
		cin>>n;
		
		Print9(n);
	}



*/
// ====================================================


//	 Pattern10: https://bit.ly/3WZoytT
/*

	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n;
		cin>>n;
		
		Print10(n);
	}


*/

// ====================================================

//	 Pattern11: https://bit.ly/3WLiUvW

/*
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n;
		cin>>n;
		
		Print11(n);
	}


*/

// ====================================================


//	 Pattern12: https://bit.ly/3jDVVnD

/*

	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n;
		cin>>n;
		
		Print12(n);
	}

*/


// ====================================================


//	Pattern13: https://bit.ly/3WWQ1wb
/*


	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n;
		cin>>n;
		
		Print13(n);
	}


*/

// ====================================================




//	Pattern14: https://bit.ly/3GyWCYs
/*


	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n;
		cin>>n;
		
		Print14(n);
	}



*/
// ====================================================



//	Pattern15: https://bit.ly/3X1i8KC
/*


	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n;
		cin>>n;
		
		Print15(n);
	}


*/

// ====================================================




//	Pattern16: https://bit.ly/3G9gq3g
/*


	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n;
		cin>>n;
		
		Print16(n);
	}


*/


// ====================================================



//	Pattern17: https://bit.ly/3jJ7CcR

/*

	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n;
		cin>>n;
		
		Print17(n);
	}



*/

// ====================================================



//	Pattern18: https://bit.ly/3Z3scot
/*

	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n;
		cin>>n;
		
		Print18(n);
	}



*/

// ====================================================



//	Pattern19: https://bit.ly/3QfKij1

/*
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n;
		cin>>n;
		
		Print19(n);
	}


*/


// ====================================================





//	Pattern20: https://bit.ly/3QfKij1
/*

	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n;
		cin>>n;
		
		Print20(n);
	}


*/


// ====================================================

//	Pattern21: https://bit.ly/3QfKij1

/*
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n;
		cin>>n;
		
		Print21(n);
	}


*/


// ====================================================


//	Pattern22: https://bit.ly/3QfKij1


	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n;
		cin>>n;
		
		Print22(n);
	}





// ====================================================

























	
	return 0;
}