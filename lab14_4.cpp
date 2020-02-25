#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &, int &, int &);
void swap(int arr[], int i, int j);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

//Write definition of shuffle() here 
void shuffle(int &a, int &b, int &c, int &d) {
    
    int set[] = {a, b, c, d};
    for (short i = 0; i < 400; i++) {
        int r = rand()%4;
        int s = rand()%4;
        swap(set, s, r);
    }
    
    a = set[0];
    b = set[1];
    c = set[2];
    d = set[3];
}

void swap(int arr[], int i, int j) {
    int t = arr[i];
    arr[i] = arr[j];
    arr[j] = t;
}