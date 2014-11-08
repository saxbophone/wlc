#define LANG "en-GB"
#ifndef __cplusplus
#error A C++ Compiler is required!
#endif

#include <iostream>
#include <string>
#include <ctime>

using namespace std;

#define TITLE "Word-ladder Cracker"
#define VERSION 0.1
#define ACKNOWLEDGE "J.A.SAXBY"
#define WRITTEN "Oct 12 2012"
#define DESCRIPTION "WLC will solve a 4-letter word-ladder puzzle (the type of puzzle originally invented by Lewis Caroll in 1877)"

#include LANG //Includes a massive line of all the 4-letter words for the language that source file LANG is intended for (eg, use 'en-GB' for British English)
#ifndef WORD
#error in wordlist source file - no quantifier (WORD)
#endif

bool test(string in)
	{
		bool check = false;
		for(int count = 0; count < WORD; count++)
		{
			if (in.compare(words[count]) == 0 ) { check = true; }
		}
		return check;
	}

string * find(string in)
	{
		// now count all 4 letter words that can be made from in
		string cp = in;
		int tot = 0;
		for(int c = 0; c < 4; c++)
		{
			in = cp;
			if(test(in.replace(c,1,"a")) == true && in.replace(c,1,"a") != cp ) { tot++; }
			if(test(in.replace(c,1,"b")) == true && in.replace(c,1,"b") != cp ) { tot++; }
			if(test(in.replace(c,1,"c")) == true && in.replace(c,1,"c") != cp ) { tot++; }
			if(test(in.replace(c,1,"d")) == true && in.replace(c,1,"d") != cp ) { tot++; }
			if(test(in.replace(c,1,"e")) == true && in.replace(c,1,"e") != cp ) { tot++; }
			if(test(in.replace(c,1,"f")) == true && in.replace(c,1,"f") != cp ) { tot++; }
			if(test(in.replace(c,1,"g")) == true && in.replace(c,1,"g") != cp ) { tot++; }
			if(test(in.replace(c,1,"h")) == true && in.replace(c,1,"h") != cp ) { tot++; }
			if(test(in.replace(c,1,"i")) == true && in.replace(c,1,"i") != cp ) { tot++; }
			if(test(in.replace(c,1,"j")) == true && in.replace(c,1,"j") != cp ) { tot++; }
			if(test(in.replace(c,1,"k")) == true && in.replace(c,1,"k") != cp ) { tot++; }
			if(test(in.replace(c,1,"l")) == true && in.replace(c,1,"l") != cp ) { tot++; }
			if(test(in.replace(c,1,"m")) == true && in.replace(c,1,"m") != cp ) { tot++; }
			if(test(in.replace(c,1,"n")) == true && in.replace(c,1,"n") != cp ) { tot++; }
			if(test(in.replace(c,1,"o")) == true && in.replace(c,1,"o") != cp ) { tot++; }
			if(test(in.replace(c,1,"p")) == true && in.replace(c,1,"p") != cp ) { tot++; }
			if(test(in.replace(c,1,"q")) == true && in.replace(c,1,"q") != cp ) { tot++; }
			if(test(in.replace(c,1,"r")) == true && in.replace(c,1,"r") != cp ) { tot++; }
			if(test(in.replace(c,1,"s")) == true && in.replace(c,1,"s") != cp ) { tot++; }
			if(test(in.replace(c,1,"t")) == true && in.replace(c,1,"t") != cp ) { tot++; }
			if(test(in.replace(c,1,"u")) == true && in.replace(c,1,"u") != cp ) { tot++; }
			if(test(in.replace(c,1,"v")) == true && in.replace(c,1,"v") != cp ) { tot++; }
			if(test(in.replace(c,1,"w")) == true && in.replace(c,1,"w") != cp ) { tot++; }
			if(test(in.replace(c,1,"x")) == true && in.replace(c,1,"x") != cp ) { tot++; }
			if(test(in.replace(c,1,"y")) == true && in.replace(c,1,"y") != cp ) { tot++; }
			if(test(in.replace(c,1,"z")) == true && in.replace(c,1,"z") != cp ) { tot++; }
		}
		string * poss;
		poss = new string [tot+1];//create a dynamic array to store them in
		tot = 0;
		for(int c = 0; c < 4; c++)
		{
			in = cp;
			if(test(in.replace(c,1,"a")) == true && in.replace(c,1,"a") != cp ) { poss[tot] = in.replace(c,1,"a"); tot++; }
			if(test(in.replace(c,1,"b")) == true && in.replace(c,1,"b") != cp ) { poss[tot] = in.replace(c,1,"b"); tot++; }
			if(test(in.replace(c,1,"c")) == true && in.replace(c,1,"c") != cp ) { poss[tot] = in.replace(c,1,"c"); tot++; }
			if(test(in.replace(c,1,"d")) == true && in.replace(c,1,"d") != cp ) { poss[tot] = in.replace(c,1,"d"); tot++; }
			if(test(in.replace(c,1,"e")) == true && in.replace(c,1,"e") != cp ) { poss[tot] = in.replace(c,1,"e"); tot++; }
			if(test(in.replace(c,1,"f")) == true && in.replace(c,1,"f") != cp ) { poss[tot] = in.replace(c,1,"f"); tot++; }
			if(test(in.replace(c,1,"g")) == true && in.replace(c,1,"g") != cp ) { poss[tot] = in.replace(c,1,"g"); tot++; }
			if(test(in.replace(c,1,"h")) == true && in.replace(c,1,"h") != cp ) { poss[tot] = in.replace(c,1,"h"); tot++; }
			if(test(in.replace(c,1,"i")) == true && in.replace(c,1,"i") != cp ) { poss[tot] = in.replace(c,1,"i"); tot++; }
			if(test(in.replace(c,1,"j")) == true && in.replace(c,1,"j") != cp ) { poss[tot] = in.replace(c,1,"j"); tot++; }
			if(test(in.replace(c,1,"k")) == true && in.replace(c,1,"k") != cp ) { poss[tot] = in.replace(c,1,"k"); tot++; }
			if(test(in.replace(c,1,"l")) == true && in.replace(c,1,"l") != cp ) { poss[tot] = in.replace(c,1,"l"); tot++; }
			if(test(in.replace(c,1,"m")) == true && in.replace(c,1,"m") != cp ) { poss[tot] = in.replace(c,1,"m"); tot++; }
			if(test(in.replace(c,1,"n")) == true && in.replace(c,1,"n") != cp ) { poss[tot] = in.replace(c,1,"n"); tot++; }
			if(test(in.replace(c,1,"o")) == true && in.replace(c,1,"o") != cp ) { poss[tot] = in.replace(c,1,"o"); tot++; }
			if(test(in.replace(c,1,"p")) == true && in.replace(c,1,"p") != cp ) { poss[tot] = in.replace(c,1,"p"); tot++; }
			if(test(in.replace(c,1,"q")) == true && in.replace(c,1,"q") != cp ) { poss[tot] = in.replace(c,1,"q"); tot++; }
			if(test(in.replace(c,1,"r")) == true && in.replace(c,1,"r") != cp ) { poss[tot] = in.replace(c,1,"r"); tot++; }
			if(test(in.replace(c,1,"s")) == true && in.replace(c,1,"s") != cp ) { poss[tot] = in.replace(c,1,"s"); tot++; }
			if(test(in.replace(c,1,"t")) == true && in.replace(c,1,"t") != cp ) { poss[tot] = in.replace(c,1,"t"); tot++; }
			if(test(in.replace(c,1,"u")) == true && in.replace(c,1,"u") != cp ) { poss[tot] = in.replace(c,1,"u"); tot++; }
			if(test(in.replace(c,1,"v")) == true && in.replace(c,1,"v") != cp ) { poss[tot] = in.replace(c,1,"v"); tot++; }
			if(test(in.replace(c,1,"w")) == true && in.replace(c,1,"w") != cp ) { poss[tot] = in.replace(c,1,"w"); tot++; }
			if(test(in.replace(c,1,"x")) == true && in.replace(c,1,"x") != cp ) { poss[tot] = in.replace(c,1,"x"); tot++; }
			if(test(in.replace(c,1,"y")) == true && in.replace(c,1,"y") != cp ) { poss[tot] = in.replace(c,1,"y"); tot++; }
			if(test(in.replace(c,1,"z")) == true && in.replace(c,1,"z") != cp ) { poss[tot] = in.replace(c,1,"z"); tot++; }
		}
		poss[tot] = "!!!!";// "End of Array" tag, so we can get the size of the array
		return poss;
	}

string * cross(string * aArr, int aLen, string * zArr, int zLen, int mode)
	{
		//cross-reference the dynamic arrays aArr and zArr (where aLen and zLen are their sizes). Mode is how many characters in common to look for
		int tot = 0;
		for(int l = 0; l < aLen; l++)
		{
			for(int L = 0; L < zLen; L++)
			{
				int minc = 0;
				for(int mind = 0; mind < 4; mind++)
				{
					if(aArr[l].substr(mind,1) == zArr[L].substr(mind,1))
					{
						minc++;
					}
				}
				if(minc >= mode)
				{
					tot++;
				}
			}
		}
		string * poss;
		poss = new string [tot+1];//create a dynamic array to store them in
		tot = 0;
		for(int l = 0; l < aLen; l++)
		{
			for(int L = 0; L < zLen; L++)
			{
				int minc = 0;
				for(int mind = 0; mind < 4; mind++)
				{
					if(aArr[l].substr(mind,1) == zArr[L].substr(mind,1))
					{
						minc++;
					}
				}
				if(minc >= mode)
				{
					poss[tot] = aArr[l] + zArr[L];//combine matching pairs into 8-letter words, to make things a bit easier
					tot++;
				}
			}
		}
		poss[tot] = "!!!!";
		return poss;
	}

bool CROSS(string aArr, string zArr, int mode)
	{
		int minc = 0;
		for(int mind = 0; mind < 4; mind++)
			{
				if(aArr.substr(mind,1) == zArr.substr(mind,1))
				{
					minc++;
				}
			}
			if(minc >= mode)
			{
				return true;
			}
			else
			{
				return false;
			}
	}

int main()
{
	cout<<TITLE<<" v"<<VERSION<<" written by "<<ACKNOWLEDGE<<" on "<<WRITTEN<<", compiled for locale ["<<LANG<<"] at "<<__TIME__<<" on "<<__DATE__<< endl;
	cout<<DESCRIPTION<< endl;
	string a, z; // recieve inputs - the two words
	cin>>a>>z;
	cin.get();
	//SANITY CHECKING TO AVOID OUT OF BOUNDS ERRORS
	// next need to format the string a to four chars long
	a.resize(4,'?');
	cout<<"Stage 1 of 4 - ";
	if(test(a) == true)
	{
		cout<<"Finding words 1 letter away from '"<<a<<"' ... ";
		string * aPoss;
		aPoss = find(a);
		if(aPoss[0] != "!!!!")
		{
			int c = 0;
			do {
				c++;
			} while (aPoss[c] != "!!!!");
			cout<<"\t\t\t[DONE] ";
			cout<<"("<<c<<")"<< endl;
			// now do the same for string z
			z.resize(4,'?');
			cout<<"Stage 2 of 4 - ";
			if(test(z) == true)
			{
				cout<<"Finding words 1 letter away from '"<<z<<"' ... ";
				string * zPoss;
				zPoss = find(z);
				if(zPoss[0] != "!!!!")
				{
					int d = 0;
					do {
						d++;
					} while (zPoss[d] != "!!!!");
					cout<<"\t\t\t[DONE] ";
					cout<<"("<<d<<")"<< endl;
					//now we can cross-reference these lists of words, counting the words that have one letter in common with eachother
					cout<<"Stage 3 of 4 - Cross-referencing words found from '"<<a<<"' and '"<<z<<"' ... ";
					string * azPoss;
					azPoss = cross(aPoss,c,zPoss,d,1);
					int cd = 0;
					if (azPoss[cd] != "!!!!")
					{
						do {
							cd++;
						} while (azPoss[cd] != "!!!!");
						cout<<"\t[DONE] ";
						cout<<"("<<cd<<")"<< endl;
						//WHERE I LAST STOPPED WORKING
						//given that the possible pairs are already stored together, the rest isn't too hard.
						cout<<"Stage 4 of 4 - Finding solutions ...";
						//avg speed = 1262 solutions/second
						if((cd*cd) >= (60*1262))
						{
							cout<<"(Max wait time: "<<(cd*cd)/1262<<" seconds) - Press ENTER\t[WORKING]"<< endl;
							cin.get();
						}
						else
						{
							cout<<"\t\t\t\t\t\t[WORKING]"<< endl;;
						}
						int total = 0;
						for(int u = 0; u < cd; u++)
						{
							string * left;
							left = find(azPoss[u].substr(0,4));
							int lu = 0;
							while(left[lu] != "!!!!")
							{
								lu++;
							}
							string * right;
							right = find(azPoss[u].substr(4,4));
							int ru = 0;
							while(right[ru] != "!!!!")
							{
								ru++;
							}
							for(int nl = 0; nl < lu; nl++)
							{
								for(int nr = 0; nr < ru; nr++)
								{
									if(CROSS(left[nl],right[nr],3) == true)
									{
										cout<<a<<"\t"<<azPoss[u].substr(0,4)<<"\t"<<left[nl]<<"\t"<<right[nr]<<"\t"<<azPoss[u].substr(4,4)<<"\t"<<z<<"\t\t\t\t\t[WORKING]"<< endl;
										total++;
									}
								}
							}
						}
						if(total > 0)
						{
							cout<<"Success! Found "<<total<<" solutions to the puzzle.\t\t\t\t\t[DONE] ("<<total<<")"<< endl;
							cin.get();
						}
						else
						{
							cout<<"No solutions could be found.\t\t\t\t\t\t\t[FAIL] (0)"<< endl;
							cin.get();
						}
					}
					else
					{
						cout<<"\t[FAIL] - No cross-references found (0)"<< endl;
						cin.get();
					}
				}
				else
				{
					cout<<"\t\t\t[FAIL] - No words found (0)"<< endl;
					cin.get();
				}
			}
			else
			{
				cout<<"ERROR! '"<<z<<"' is not a 4-letter English word!\t\t\t[FAIL]"<< endl;
				cin.get();
			}
		}
		else
		{
			cout<<"\t\t\t[FAIL] - No words found (0)"<< endl;
			cin.get();
		}
	}	
	else
	{
		cout<<"ERROR! '"<<a<<"' is not a 4-letter English word!\t\t\t[FAIL]"<< endl;
		cin.get();
	}
}
