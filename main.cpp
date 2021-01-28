#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
int ile;
class ciag
{
    vector <int> ciag;
	
public:
    void wprowadz();
    void wypisz();
    int obliczanie();
    int sprawdzenie(int x, int y);
    int zapiszDoPliku(const char *);             
};

void ciag::wprowadz()
{

			fstream plik;  
			int wprowadzany;
			plik.open("ciagi.txt", ios::in); 
			if(plik.good()) 
			while(!plik.eof()) 
			      {
			  	plik >> ile;
			  	for(int i = 1; i <= ile ; i++)
			  	{
					plik >> wprowadzany;
					ciag.push_back(wprowadzany);
				}
				ile = 0;
			   }
			   plik.close();   
}


void ciag::wypisz()
{
		for (int i = 0; i < ciag.size(); i++)
		
		{
			
			cout << ciag[i] << "\n";
			
		}
}



int ciag::obliczanie()
{
	int max = 0;
	bool prawda = false;
	int roznica;
	int r2;
	for (int i = 0; i < ciag.size(); i++)
	{
        r2 = roznica;
		 
        roznica = ciag[i + 1] - ciag[i];
        if (r2 == roznica)
		{
			prawda = true;
		}
		else
		{
			continue;
		}

		if(prawda == true)
		{
			if (roznica > max)
			{
				max = roznica;
			}
		}            

	
	}
	
	cout << "max: " << max << endl;
}




int main()
{
	ciag licz;
    licz.wprowadz();
	//  licz.wypisz();
    licz.obliczanie();

    return 0;
}
