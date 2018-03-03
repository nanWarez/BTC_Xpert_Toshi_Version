//created by Cr4shOv3rrid3 under the https://github.com/Cr4shOv3rrid3/1337_General_Public_BTC_Banking_license 
// feel free to copy, hack, destroy or create new things with it
// P.S. if you don't like i created that for you. just replace first line with your own cool stylish hacker name ;)

#include <iostream>
#include <stdio.h>
#include <string>
#include <iomanip>


using namespace std;

//initializing_first start {
string unit = "BTC";
string unit_eth = "ETH";

string username0 = "Cr4shOv4rrid3";
string displayname0 = "CrashOverride";
string address0 = "put_into_your_ethereum_address_here!!!";

string mat0 = "stone";
string mat1 = "gold";
string mat2 = "silver";
string mat3 = "iron";
//initializing_first end }

//declare 4 structs start {
struct toshi {
	static char const et = '@';
	string username;
	string displayname;
	string address;
	static float const amount = 10.111111;
};
struct test1 {
	string mat;
	int quantity;
	static float const price = 5.5;
	double extended;
};
struct test2 {
	string mat;
	int quantity;
	static float const price = 2.6;
	double extended;
};
struct test3 {
	string mat;
	int quantity;
	static float const price = 1.9;
	double extended;
	string shitsgotreal;
};							//amount of BTC in sum and cost price of roundabout a local banking license: (100k$)
//declare 4 structs end }

//declare var for struct use start {
toshi user1;
test1  var1;
test2 var2;
test3 var3;
//declare var for struct use end }      

void settings(void) {

user1.username = username0;
user1.displayname = displayname0;
user1.address = address0;

var1.mat = mat1;
var2.mat = mat2;
var3.mat = mat3;
}


void testprint(void) {

cout << "crypto units Generator Test Programm: \n";
cout << setprecision(8) << user1.amount <<  " " << unit_eth << " " << user1.et + user1.username << "; " << user1.address << "\n"; 
cout << setprecision(2) << var1.price << " "  << unit << " " << var1.mat << "\n" 
     << setprecision(2) << var2.price << " " << unit << " " << var2.mat << "\n" 
     << setprecision(2) << var3.price << " " << unit << " " << var3.mat << "\n";

}

int main()
{

settings();
testprint();

//cout << setfill('-');

int count = 10;
char ch;
while(cin.get(ch) != ".")
count++;
cout << "Numbers of characters read: \n" << count;
cout << "Test print!!!";
        return 0;
} //Basic crypto generator Test Programmm in 100 Lines of code



	
