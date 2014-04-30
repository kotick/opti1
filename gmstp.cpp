/*
Optimizacion Heuristica
Problema GMSTP
Algoritmo genetico
*/

#include <stdio.h>
#include <set>
#include <math.h>
#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <ga/GA1DBinStrGenome.h>
#include <ga/GADemeGA.h>
#include <ga/std_stream.h>
using namespace std;


int main(int argc, char **argv){
	
//
cout <<"'compilé'"<< endl;
return 0;
}


int read(){
std::vector<char> v;
if (FILE *fp = fopen("filename", "r"))
{
	char buf[1024];
	while (size_t len = fread(buf, 1, sizeof(buf), fp))
		v.insert(v.end(), buf, buf + len);
	fclose(fp);
}

cout << v <<endl;



	return 0;
}

