#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <istream>
#include <fstream>
#include <stdlib.h>
#include <string.h>
using namespace std;

struct node{
    int item_code;
    string item_name;
    int item_price;
    node* next;
};

struct Node{
    string item_name;
    int item_price;
    int quantity;
    Node* next;
} *front = NULL,*rear = NULL,*pointer = NULL,*nextpointer = NULL;

void enqueue (string name, int item, int q)
{
  nextpointer = new Node;
  nextpointer->item_name = name;
  nextpointer->item_price = item;
  nextpointer->quantity = q;
  nextpointer->next = NULL;
  int t = 0;
  cout << "******************************" << endl;
  cout << "\tTotal: " << t+(item*q) << endl;
  cout << "******************************" << endl;
  cout << endl;
  if (front == NULL)
    {
      front = rear = nextpointer;
      rear->next = NULL;
    }
  else
    {
      rear->next = nextpointer;
      rear = nextpointer;
      rear->next = NULL;
    }
}

bool cmp(pair<string, int>& a,
		pair<string, int>& b)
{
	return a.second > b.second;
}

void sort(map<string, int>& M)
{
	vector<pair<string, int> > A;

	for (auto& it : M) {
		A.push_back(it);
	}

	sort(A.begin(), A.end(), cmp);

	for (auto& it : A) {

		cout << it.first << ' '
			<< it.second << endl;
	}
}

bool cmp1(pair<string, int>& a,
		pair<string, int>& b)
{
	return a.second < b.second;
}

void sort1(map<string, int>& M)
{

	vector<pair<string, int> > A;

	for (auto& it : M) {
		A.push_back(it);
	}

	sort(A.begin(), A.end(), cmp1);

	for (auto& it : A) {

		cout << it.first << ' '
			<< it.second << endl;
	}
}

void login();
void registr();
void categories();
void traversalmen();
void traversalwomen();
void traversalwatches();
void traversalshoes();
void traversalbags();
void sortingmen();
void sortingwomen();
void sortingwatches();
void sortingshoes();
void sortingbags();
void High_to_Low();
void Low_to_High();
void menhl();
void menlh();
void womenhl();
void womenlh();
void watcheshl();
void watcheslh();
void shoeshl();
void shoeslh();
void bagshl();
void bagslh();
void mycart();

int main(){
    cout << endl;
    cout << setw(75) << "**********" << endl;
    cout << setw(76) << "OneClickPick" << endl;
    cout << setw(75) << "**********" << endl;
    cout << endl;
    cout << setw(83) << "Welcome abode Fashionista!" << endl;
    cout << endl;
    cout << setw(15) << "                       You are now on the list - will be the first to know about our latest styles and trends." << endl;
    cout << setw(15) << "                                   Choose the below options to know more about the latest fad." << endl;
    cout << endl;
    cout << setw(75) << "----------" << endl;
    cout << endl;
    int choice;
    cout<<"1.LOGIN"<<endl;
    cout<<"2.REGISTER"<<endl;
    cout<<"3.Exit"<<endl;
    cout<<"\nEnter your choice :";
    cin>>choice;
    cout<<endl;
    switch(choice){
        case 1:
            login();
            break;
        case 2:
            registr();
            break;
        case 3:
            cout<<"\t\t\t\t\t\t\t\tSee you soon!" << endl;
            exit(1);
        default:
            system("cls");
            cout<<"You've made a mistake , Try again..\n"<<endl;
            main();
    }
    cout<<endl;
    cout<<"\t \t \t \t \t \t\tThank You For Shopping With Us" << endl;
    cout<< "\t\t\t\t\t    Your Product Will Be delivered to You within 4 Working Days." << endl;
    cout<< "\t\t\t\t\t\tHope Your Experiance With Us Was Great...See You Soon." << endl;
    cout<<endl;
    cout<< "\t\t\t\t\t\t\t***** Happy Shopping *****" << endl;
    return 0;
}

void login(){
        int count;
        string user,pass,u,p;
        system("cls");
        cout<<"please enter the following details"<<endl;
        cout<<"USERNAME: ";
        cin>>user;
        cout<<"PASSWORD: ";
        cin>>pass;

        ifstream input("database.txt");
        while(input>>u>>p){
            if(u==user && p==pass){
                    count=1;
                    system("cls");
            }
        }
        input.close();
        if(count==1){
                cout<<"\nHello"<<user<<"\n<LOGIN SUCCESSFUL>\nThanks for logging in..\n";
                cin.get();
                cin.get();
                categories();
        }
        else{
                cout<<"\nLOGIN ERROR\nPlease check your username and password\n";
                main();
        }
}

void registr(){
    string reguser,regpass,ru,rp;
    system("cls");
    cout<<"Enter the username: ";
    cin>>reguser;
    cout<<"\nEnter the password: ";
    cin>>regpass;
    ofstream reg("database.txt",ios::app);
    reg<<reguser<<' '<<regpass<<endl;
    cout<<"\nRegistration Successful\n";
    cin.get();
    cin.get();
    categories();
}

void categories(){
    system("cls");
    int choice;
    cout << "\nCategories: " << endl;
    cout << "1. Men's Clothing" << endl;
    cout << "2. Women's Clothing" << endl;
    cout << "3. Watches " << endl;
    cout << "4. Shoes" << endl;
    cout << "5. Bags" << endl;
    cout<<"\nEnter your choice: ";
    cin>>choice;
    cout<<endl;
    switch(choice){
        case 1:
            traversalmen();
            break;
        case 2:
            traversalwomen();
            break;
        case 3:
            traversalwatches();
            break;
        case 4:
            traversalshoes();
            break;
        case 5:
            traversalbags();
            break;
        default:
            system("cls");
            cout<<"Not available! Try again..\n"<<endl;
            categories();
    }
}

void traversalmen(){
    node* head, *n1, *n2, *n3, *n4, *n5, *n6, *n7, *n8, *n9, *ptr;
    head = NULL;
    n1 = NULL;
    n2 = NULL;
    n3 = NULL;
    n4 = NULL;
    n5 = NULL;
    n6 = NULL;
    n7 = NULL;
    n8 = NULL;
    n9 = NULL;
    head = new node();
    n1 = new node();
    n2 = new node();
    n3 = new node();
    n4 = new node();
    n5 = new node();
    n6 = new node();
    n7 = new node();
    n8 = new node();
    n9 = new node();
    head->item_code = 1;
    head->item_name = "|T-shirt       |";
    head->item_price = 199;
    head->next = n1;
    n1->item_code = 2;
    n1->item_name = "|Shirt         |";
    n1->item_price = 299;
    n1->next = n2;
    n2->item_code = 3;
    n2->item_name = "|Sweatshirt    |";
    n2->item_price = 399;
    n2->next = n3;
    n3->item_code = 4;
    n3->item_name = "|Sweater       |";
    n3->item_price = 499;
    n3->next = n4;
    n4->item_code = 5;
    n4->item_name = "|Jacket        |";
    n4->item_price = 599;
    n4->next = n5;
    n5->item_code = 6;
    n5->item_name = "|Undershirt    |";
    n5->item_price = 699;
    n5->next = n6;
    n6->item_code = 7;
    n6->item_name = "|Pant          |";
    n6->item_price = 799;
    n6->next = n7;
    n7->item_code = 8;
    n7->item_name = "|Jeans         |";
    n7->item_price = 859;
    n7->next = n8;
    n8->item_code = 9;
    n8->item_name = "|Suit-piece    |";
    n8->item_price = 899;
    n8->next = n9;
    n9->item_code = 10;
    n9->item_name = "|Suit-stitched|";
    n9->item_price = 999;
    n9->next = NULL;
    ptr = head;
    do {
        cout << ptr->item_code;
        cout << ptr->item_name;
        cout << ptr->item_price;
        cout << "|" << endl;
        ptr = ptr->next;
   } while(ptr != NULL);
   sortingmen();
}

void traversalwomen(){
    node* head, *n1, *n2, *n3, *n4, *n5, *n6, *n7, *n8, *n9, *ptr;
    head = NULL;
    n1 = NULL;
    n2 = NULL;
    n3 = NULL;
    n4 = NULL;
    n5 = NULL;
    n6 = NULL;
    n7 = NULL;
    n8 = NULL;
    n9 = NULL;
    head = new node();
    n1 = new node();
    n2 = new node();
    n3 = new node();
    n4 = new node();
    n5 = new node();
    n6 = new node();
    n7 = new node();
    n8 = new node();
    n9 = new node();
    head->item_code = 11;
    head->item_name = "|Peach_Top   |";
    head->item_price = 199;
    head->next = n1;
    n1->item_code = 12;
    n1->item_name = "|Red_Top     |";
    n1->item_price = 299;
    n1->next = n2;
    n2->item_code = 13;
    n2->item_name = "|White_Shirt |";
    n2->item_price = 399;
    n2->next = n3;
    n3->item_code = 14;
    n3->item_name = "|Dress       |";
    n3->item_price = 499;
    n3->next = n4;
    n4->item_code = 15;
    n4->item_name = "|Denim_Jacket|";
    n4->item_price = 599;
    n4->next = n5;
    n5->item_code = 16;
    n5->item_name = "|Skirt       |";
    n5->item_price = 699;
    n5->next = n6;
    n6->item_code = 17;
    n6->item_name = "|Fit_Pants   |";
    n6->item_price = 799;
    n6->next = n7;
    n7->item_code = 18;
    n7->item_name = "|Ripped_Jeans|";
    n7->item_price = 859;
    n7->next = n8;
    n8->item_code = 19;
    n8->item_name = "|Pullover    |";
    n8->item_price = 899;
    n8->next = n9;
    n9->item_code = 20;
    n9->item_name = "|Cardigan    |";
    n9->item_price = 999;
    n9->next = NULL;
    ptr = head;
    do {
        cout << ptr->item_code;
        cout << ptr->item_name;
        cout << ptr->item_price;
        cout << "|" << endl;
        ptr = ptr->next;
   } while(ptr != NULL);
   sortingwomen();
}

void traversalwatches(){
    node* head, *n1, *n2, *n3, *n4, *n5, *n6, *n7, *n8, *n9, *ptr;
    head = NULL;
    n1 = NULL;
    n2 = NULL;
    n3 = NULL;
    n4 = NULL;
    n5 = NULL;
    n6 = NULL;
    n7 = NULL;
    n8 = NULL;
    n9 = NULL;
    head = new node();
    n1 = new node();
    n2 = new node();
    n3 = new node();
    n4 = new node();
    n5 = new node();
    n6 = new node();
    n7 = new node();
    n8 = new node();
    n9 = new node();
    head->item_code = 21;
    head->item_name = "|Boat_xtend_smartwatch                      |";
    head->item_price = 3099;
    head->next = n1;
    n1->item_code = 22;
    n1->item_name = "|Fastrack_Reflex_3.0_Unisex_Activity_Tracker|";
    n1->item_price = 2231;
    n1->next = n2;
    n2->item_code = 23;
    n2->item_name = "|TIMEX_Analog_Men's_Watch                   |";
    n2->item_price = 1299;
    n2->next = n3;
    n3->item_code = 24;
    n3->item_name = "|TIMEX_Analog_Women's_Watch                 |";
    n3->item_price = 1399;
    n3->next = n4;
    n4->item_code = 25;
    n4->item_name = "|SKMEI_Men's_Digital_Sports_Watch           |";
    n4->item_price = 1009;
    n4->next = n5;
    n5->item_code = 26;
    n5->item_name = "|SKMEI Women's Digital Sports Watch         |";
    n5->item_price = 1009;
    n5->next = n6;
    n6->item_code = 27;
    n6->item_name = "|Fossil_Gen5_Touchscreen_Smartwatch        |";
    n6->item_price = 9999;
    n6->next = n7;
    n7->item_code = 28;
    n7->item_name = "|Casio_Analog_Black_Dial_Watch              |";
    n7->item_price = 3145;
    n7->next = n8;
    n8->item_code = 29;
    n8->item_name = "|Armani_Exchange_Chronograph_Watch          |";
    n8->item_price = 9099;
    n8->next = n9;
    n9->item_code = 30;
    n9->item_name = "|Casio_Analog_White_Dial_Watch              |";
    n9->item_price = 3415;
    n9->next = NULL;
    ptr = head;
    do {
        cout << ptr->item_code;
        cout << ptr->item_name;
        cout << ptr->item_price;
        cout << "|" << endl;
        ptr = ptr->next;
   } while(ptr != NULL);
   sortingwatches();
}

void traversalshoes(){
    node* head, *n1, *n2, *n3, *n4, *n5, *n6, *n7, *n8, *n9, *ptr;
    head = NULL;
    n1 = NULL;
    n2 = NULL;
    n3 = NULL;
    n4 = NULL;
    n5 = NULL;
    n6 = NULL;
    n7 = NULL;
    n8 = NULL;
    n9 = NULL;
    head = new node();
    n1 = new node();
    n2 = new node();
    n3 = new node();
    n4 = new node();
    n5 = new node();
    n6 = new node();
    n7 = new node();
    n8 = new node();
    n9 = new node();
    head->item_code = 31;
    head->item_name = "|Nike_Running_Shoes     |";
    head->item_price = 1995;
    head->next = n1;
    n1->item_code = 32;
    n1->item_name = "|Pacer_Next_Excel_Core  |";
    n1->item_price = 3299;
    n1->next = n2;
    n2->item_code = 33;
    n2->item_name = "|DYNAMIGHT_Running_Shoes|";
    n2->item_price = 3134;
    n2->next = n3;
    n3->item_code = 34;
    n3->item_name = "|DRAGON_Running_Shoes   |";
    n3->item_price = 2049;
    n3->next = n4;
    n4->item_code = 35;
    n4->item_name = "|Red_Tape_Walking_Shoes |";
    n4->item_price = 1120;
    n4->next = n5;
    n5->item_code = 36;
    n5->item_name = "|SM-432_Athlete_Shoes   |";
    n5->item_price = 1699;
    n5->next = n6;
    n6->item_code = 37;
    n6->item_name = "|YKING_Adidas           |";
    n6->item_price = 1499;
    n6->next = n7;
    n7->item_code = 38;
    n7->item_name = "|EXPLORE_Running_Shoes  |";
    n7->item_price = 1234;
    n7->next = n8;
    n8->item_code = 39;
    n8->item_name = "|BRISK_FR_IDP_Puma      |";
    n8->item_price = 1599;
    n8->next = n9;
    n9->item_code = 40;
    n9->item_name = "|Sketchers_Bellies      |";
    n9->item_price = 3799;
    n9->next = NULL;
    ptr = head;
    do {
        cout << ptr->item_code;
        cout << ptr->item_name;
        cout << ptr->item_price;
        cout << "|" << endl;
        ptr = ptr->next;
   } while(ptr != NULL);
   sortingshoes();
}

void traversalbags(){
    node* head, *n1, *n2, *n3, *n4, *n5, *n6, *n7, *n8, *n9, *ptr;
    head = NULL;
    n1 = NULL;
    n2 = NULL;
    n3 = NULL;
    n4 = NULL;
    n5 = NULL;
    n6 = NULL;
    n7 = NULL;
    n8 = NULL;
    n9 = NULL;
    head = new node();
    n1 = new node();
    n2 = new node();
    n3 = new node();
    n4 = new node();
    n5 = new node();
    n6 = new node();
    n7 = new node();
    n8 = new node();
    n9 = new node();
    head->item_code = 41;
    head->item_name = "|22L_School_Bag |";
    head->item_price = 599;
    head->next = n1;
    n1->item_code = 42;
    n1->item_name = "|32L_School_Bag |";
    n1->item_price = 699;
    n1->next = n2;
    n2->item_code = 43;
    n2->item_name = "|Red_Sling_Bag  |";
    n2->item_price = 399;
    n2->next = n3;
    n3->item_code = 44;
    n3->item_name = "|White_Sling_Bag|";
    n3->item_price = 399;
    n3->next = n4;
    n4->item_code = 45;
    n4->item_name = "|Beige_Sling_Bag|";
    n4->item_price = 399;
    n4->next = n5;
    n5->item_code = 46;
    n5->item_name = "|Women's_Wallet |";
    n5->item_price = 599;
    n5->next = n6;
    n6->item_code = 47;
    n6->item_name = "|Men's_Wallet   |";
    n6->item_price = 499;
    n6->next = n7;
    n7->item_code = 48;
    n7->item_name = "|Laptop_Bag     |";
    n7->item_price = 659;
    n7->next = n8;
    n8->item_code = 49;
    n8->item_name = "|Travel_Handbag |";
    n8->item_price = 725;
    n8->next = n9;
    n9->item_code = 50;
    n9->item_name = "|SuitCase       |";
    n9->item_price = 989;
    n9->next = NULL;
    ptr = head;
    do {
        cout << ptr->item_code;
        cout << ptr->item_name;
        cout << ptr->item_price;
        cout << "|" << endl;
        ptr = ptr->next;
   } while(ptr != NULL);
   sortingbags();
}

void sortingmen(){
    cout << "\nSort by: " << endl;
    cout << "1. Highest to Lowest Price " << endl;
    cout << "2. Lowest to Highest Price " << endl;
    cout << "3. Continue without sorting " << endl;
    int choice;
    cout << "\nEnter your choice: ";
    cin >> choice;
    cout << endl;
    switch(choice){
        case 1:
            menhl();
            break;
        case 2:
            menlh();
            break;
        case 3:
            mycart();
            break;
        default:
            system("cls");
            cout<<"Not available! Try again..\n"<<endl;
            categories();
    }
}

void sortingwomen(){
    cout << "\nSort by: " << endl;
    cout << "1. Highest to Lowest Price " << endl;
    cout << "2. Lowest to Highest Price " << endl;
    cout << "3. Continue without sorting " << endl;
    int choice;
    cout << "\nEnter your choice: ";
    cin >> choice;
    cout << endl;
    switch(choice){
        case 1:
            womenhl();
            break;
        case 2:
            womenlh();
            break;
        case 3:
            mycart();
            break;
        default:
            system("cls");
            cout<<"Not available! Try again..\n"<<endl;
            categories();
    }
}

void sortingwatches(){
    cout << "\nSort by: " << endl;
    cout << "1. Highest to Lowest Price " << endl;
    cout << "2. Lowest to Highest Price " << endl;
    cout << "3. Continue without sorting " << endl;
    int choice;
    cout << "\nEnter your choice: ";
    cin >> choice;
    cout << endl;
    switch(choice){
        case 1:
            watcheshl();
            break;
        case 2:
            watcheslh();
            break;
        case 3:
            mycart();
            break;
        default:
            system("cls");
            cout<<"Not available! Try again..\n"<<endl;
            categories();
    }
}

void sortingshoes(){
    cout << "\nSort by: " << endl;
    cout << "1. Highest to Lowest Price " << endl;
    cout << "2. Lowest to Highest Price " << endl;
    cout << "3. Continue without sorting " << endl;
    int choice;
    cout << "\nEnter your choice: ";
    cin >> choice;
    cout << endl;
    switch(choice){
        case 1:
            shoeshl();
            break;
        case 2:
            shoeslh();
            break;
        case 3:
            mycart();
            break;
        default:
            system("cls");
            cout<<"Not available! Try again..\n"<<endl;
            categories();
    }
}

void sortingbags(){
    cout << "\nSort by: " << endl;
    cout << "1. Highest to Lowest Price " << endl;
    cout << "2. Lowest to Highest Price " << endl;
    cout << "3. Continue without sorting " << endl;
    int choice;
    cout << "\nEnter your choice: ";
    cin >> choice;
    cout << endl;
    switch(choice){
        case 1:
            bagshl();
            break;
        case 2:
            bagslh();
            break;
        case 3:
            mycart();
            break;
        default:
            system("cls");
            cout<<"Not available! Try again..\n"<<endl;
            categories();
    }
}

void menhl(){
    map<string, int> M;
	M = { { "| 1. T-shirt       |", 199 },
		{ "| 2. Shirt         |", 299 },
		{ "| 3. Sweatshirt    |", 399 },
		{ "| 4. Sweater       |", 499 },
		{ "| 5. Jacket        |", 599 },
		{ "| 6. Undershirt    |", 699 },
		{ "| 7. Pant          |", 799 },
		{ "| 8. Jeans         |", 859 },
		{ "| 9. Suit-piece    |", 899 },
		{ "|10. Suit-stitched |", 999 } };

	sort(M);
	mycart();
}

void menlh(){
    map<string, int> M;
	M = { { "| 1. T-shirt       |", 199 },
		{ "| 2. Shirt         |", 299 },
		{ "| 3. Sweatshirt    |", 399 },
		{ "| 4. Sweater       |", 499 },
		{ "| 5. Jacket        |", 599 },
		{ "| 6. Undershirt    |", 699 },
		{ "| 7. Pant          |", 799 },
		{ "| 8. Jeans         |", 859 },
		{ "| 9. Suit-piece    |", 899 },
		{ "|10. Suit-stitched |", 999 } };

	sort1(M);
	mycart();
}

void womenhl(){
    map<string, int> M;
	M = { { "|11. Peach_Top   |", 199 },
		{ "|12. Red_Top     |", 299 },
		{ "|13. White_Shirt |", 399 },
		{ "|14. Dress       |", 499 },
		{ "|15. Denim_Jacket|", 599 },
		{ "|16. Skirt       |", 699 },
		{ "|17. Fit_Pants   |", 799 },
		{ "|18. Ripped_Jeans|", 859 },
		{ "|19. Pullover    |", 899 },
		{ "|20. Cardigan    |", 999 } };
	sort(M);
}

void womenlh(){
    map<string, int> M;
	M = { { "|11. Peach_Top   |", 199 },
		{ "|12. Red_Top     |", 299 },
		{ "|13. White_Shirt |", 399 },
		{ "|14. Dress       |", 499 },
		{ "|15. Denim_Jacket|", 599 },
		{ "|16. Skirt       |", 699 },
		{ "|17. Fit_Pants   |", 799 },
		{ "|18. Ripped_Jeans|", 859 },
		{ "|19. Pullover    |", 899 },
		{ "|20. Cardigan    |", 999 } };
	sort1(M);
	mycart();
}

void watcheshl(){
    map<string, int> M;
	M = { { "|21. Boat_xtend_smartwatch                      |", 3099 },
		{ "|22. Fastrack_Reflex_3.0_Unisex_Activity_Tracker|", 2231 },
		{ "|23. TIMEX_Analog_Men's_Watch                   |", 1299 },
		{ "|24. TIMEX_Analog_Women's_Watch                 |", 1399 },
		{ "|25. SKMEI_Men's_Digital_Sports_Watch           |", 1009 },
		{ "|26. SKMEI_Women's_Digital_Sports_Watch         |", 1009 },
		{ "|27. Fossil_Gen5_Touchscreen_Smartwatch        |", 9999 },
		{ "|28. Casio_Analog_Black_Dial_Watch              |", 3145 },
		{ "|29. Armani_Exchange_Chronograph_Watch          |", 9099 },
		{ "|30. Casio_Analog_White_Dial_Watch              |", 3415 } };
	sort(M);
}

void watcheslh(){
    map<string, int> M;
	M = { { "|21. Boat_xtend_smartwatch                      |", 3099 },
		{ "|22. Fastrack_Reflex_3.0_Unisex_Activity_Tracker|", 2231 },
		{ "|23. TIMEX_Analog_Men's_Watch                   |", 1299 },
		{ "|24. TIMEX_Analog_Women's_Watch                 |", 1399 },
		{ "|25. SKMEI_Men's_Digital_Sports_Watch           |", 1009 },
		{ "|26. SKMEI_Women's_Digital_Sports_Watch         |", 1009 },
		{ "|27. Fossil_Gen5_Touchscreen_Smartwatch        |", 9999 },
		{ "|28. Casio_Analog_Black_Dial_Watch              |", 3145 },
		{ "|29. Armani_Exchange_Chronograph_Watch          |", 9099 },
		{ "|30. Casio_Analog_White_Dial_Watch              |", 3415 } };
	sort1(M);
	mycart();
}

void shoeshl(){
    map<string, int> M;
	M = { { "|31. Nike_Running_Shoes     |", 1995 },
		{ "|32. Pacer_Next_Excel_Core  |", 3299 },
		{ "|33. DYNAMIGHT_Running_Shoes|", 3134 },
		{ "|34. DRAGON_Running_Shoes   |", 2049 },
		{ "|35. Red_Tape_Walking_Shoes |", 1120 },
		{ "|36. SM-432_Athlete_Shoes   |", 1699 },
		{ "|37. YKING_Adidas           |", 1499 },
		{ "|38. EXPLORE_Running_Shoes  |", 1234 },
		{ "|39. BRISK_FR_IDP_Puma      |", 1599 },
		{ "|40. Sketchers_Bellies      |", 3799 } };
	sort(M);
}

void shoeslh(){
    map<string, int> M;
	M = { { "|31. Nike_Running_Shoes     |", 1995 },
		{ "|32. Pacer_Next_Excel_Core  |", 3299 },
		{ "|33. DYNAMIGHT_Running_Shoes|", 3134 },
		{ "|34. DRAGON_Running_Shoes   |", 2049 },
		{ "|35. Red_Tape_Walking_Shoes |", 1120 },
		{ "|36. SM-432_Athlete_Shoes   |", 1699 },
		{ "|37. YKING_Adidas           |", 1499 },
		{ "|38. EXPLORE_Running_Shoes  |", 1234 },
		{ "|39. BRISK_FR_IDP_Puma      |", 1599 },
		{ "|40. Sketchers_Bellies      |", 3799 } };
	sort1(M);
	mycart();
}

void bagshl(){
    map<string, int> M;

	M = { { "|41. 22L_School_Bag |", 599 },
		{ "|42. 32L_School_Bag |", 699 },
		{ "|43. Red_Sling_Bag  |", 399 },
		{ "|44. White_Sling_Bag|", 399 },
		{ "|45. Beige_Sling_Bag|", 399 },
		{ "|46. Women's_Wallet |", 599 },
		{ "|47. Men's_Wallet   |", 499 },
		{ "|48. Laptop_Bag     |", 659 },
		{ "|49. Travel_Handbag |", 725 },
		{ "|50. SuitCase       |", 989 } };
	sort(M);
	mycart();
}

void bagslh(){
    map<string, int> M;
	M = { { "|41. 22L_School_Bag |", 599 },
		{ "|42. 32L_School_Bag |", 699 },
		{ "|43. Red_Sling_Bag  |", 399 },
		{ "|44. White_Sling_Bag|", 399 },
		{ "|45. Beige_Sling_Bag|", 399 },
		{ "|46. Women's_Wallet |", 599 },
		{ "|47. Men's_Wallet   |", 499 },
		{ "|48. Laptop_Bag     |", 659 },
		{ "|49. Travel_Handbag |", 725 },
		{ "|50. SuitCase       |", 989 } };
	sort1(M);
	mycart();
}

void mycart(){
    string m;
    int n,q,p, counter = 0, x1, total = 0;
    cout << endl;
    cout << "Enter the no. of item you want to buy: ";
    cin >> n;
    while (counter < n) {
            cout << endl;
            cout << "Enter name of the product: ";
            cin >>m ;
            cout << "Enter price of the product: ";
            cin >>p;
            cout << "Enter quantity of the product: ";
            cin >>q;
            enqueue (m,p,q);
            total+=(p*q);
            counter++;
    }
    cout << endl;
}


