#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int*,int*, int*, int*); 

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d); 
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int *a,int *b,int *c,int *d){
    int e[] ={*a,*b,*c,*d} ;
    for(int i = 0;i < 4;i++){
        int x;
        x = rand()%4;
        int y;
        y = e[i];
        e[i] = e[x];
        e[x] = y;
    }
    *a = e[0];
    *b = e[1];
    *c = e[2];
    *d = e[3];
}
