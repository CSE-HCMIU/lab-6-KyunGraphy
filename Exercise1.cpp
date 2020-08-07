/*
1. Input a maximum 4-digit integer n. Write a program to read the number n.
 ________________________________________________
| Input: 1234                                    |
| Output: "one thousand two hundred thirty four" |
|________________________________________________|
*/

#include <iostream>
#include <stdlib.h>

int ex1(int testcase){
	int n, t, d;
	n = testcase;
	t = 1000;
	while (t){
		d = n/t;
		n %= t;
		if (t > 10 || t == 1 || 10*d >= 20 && 10*d < 10){
			switch (d){
				case 1:{
					cout <<"one ";
					break;
				}
				case 2:{
					cout <<"two ";
					break;
				}
				case 3:{
					cout <<"three ";
					break;
				}
				case 4:{
					cout <<"four ";
					break;
				}
				case 5:{
					cout <<"five ";
					break;
				}
				case 6:{
					cout <<"six ";
					break;
				}
				case 7:{
					cout <<"seven ";
					break;
				}
				case 8:{
					cout <<"eight ";
					break;
				}
				case 9:{
					cout <<"nine ";
					break;
				}
			}
		}
		if (t == 1000){
			cout <<"thousand ";
		}
		if (t == 100 && d % t != 0){
			cout <<"hundred ";
		}
		if (t == 10){
			switch (d){
				case 1:{
					int k;
					k = n%t;
					switch (k){
						case 1:{
							cout <<"eleven ";
							break;
						}
						case 2:{
							cout <<"twelve ";
							break;
						}
						case 3:{
							cout <<"thirteen ";
							break;
						}
						case 4:{
							cout <<"fourteen ";
							break;
						}
						case 5:{
							cout <<"fifteen ";
							break;
						}
						case 6:{
							cout <<"sixteen ";
							break;
						}
						case 7:{
							cout <<"seventeen ";
							break;
						}
						case 8:{
							cout <<"eighteen ";
							break;
						}
						case 9:{
							cout <<"nineteen ";
							break;
						}
						case 0:{
							cout <<"ten ";
							break;
						}
					}
					break;
				}
				case 2:{
					cout <<"twenty ";
					break;
				}
				case 3:{
					cout <<"thirty ";
					break;
				}
				case 4:{
					cout <<"forty ";
					break;
				}
				case 5:{
					cout <<"fifty ";
					break;
				}
				case 6:{
					cout <<"sixty ";
					break;
				}
				case 7:{
					cout <<"seventy ";
					break;
				}
				case 8:{
					cout <<"eighty ";
					break;
				}
				case 9:{
					cout <<"ninty ";
					break;
				}
			}
		}
		t /= 10;
	}

}

int main(int argc, char *argv[]) {
	int testcase = atoi(argv[1]);
	
	ex1(testcase);
		
	return 0;
}
