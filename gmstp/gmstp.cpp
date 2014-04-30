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

int read();
vector<int> cluster;

int nodos;
int **aristas;

int main(int argc, char **argv){


read();

return 0;
}


int read(){   

	FILE * pFile;
   int flag =0;   

   pFile = fopen ("10att48.clu" , "r");
   if (pFile == NULL) perror ("Error opening file");
   else {

   	 while(!feof(pFile)){
   	 	char mystring [100];
   	 	if (flag==0)
   	 	{
   	 		if(strcmp(fgets(mystring,100,pFile),"\n")!=0){
   	 		char * pch;
   	 		pch =strtok (mystring," ");
   	 		cluster.push_back(atoi(mystring));

   	 		}
	   	 	else{
	   	 		flag=1;
	   	 		nodos=cluster.size();
	   	 		aristas=(int **)malloc(nodos*sizeof(int *));
	   	 		for (int i = 0; i < nodos; ++i)
	   	 		{
	   	 			aristas[i]=(int *)malloc(nodos*sizeof(int));
	   	 		}

	   	 		cout <<"y eso, entré en la wea "<< nodos <<endl;


	   	 	}
   	 		/* code */
   	 	}
   	 	else{//entonces estoy leyendo aristas sensuales

   	 		if(fgets(mystring,100,pFile)!=NULL){
   	 		char * pch;
   	 		pch =strtok (mystring," ");
   	 		int x=atoi(pch);
   	 		//cout << x <<endl;
   	 		pch =strtok (NULL," ");
   	 		int y=atoi(pch);
   	 		//cout << y <<endl;
   	 		pch =strtok (NULL," ");
   	 		int valor=atoi(pch);
   	 		//cout << valor <<endl;
   	 		if (x<y){
   	 			aristas[x][y]=valor;
   	 			cout << x <<" , " << y <<" , " << valor << endl;
   	 		}
   	 		else{
   	 			aristas[y][x]=valor;
   	 			cout << x <<" , " << y <<" , " << valor << endl;
   	 		}   	
   	 	}
   	 }
  	 	
   	 }



   }




	return 0;
}

