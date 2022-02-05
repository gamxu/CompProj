#include <iostream>
#include <ctime>
#include <Windows.h>
#include <cmath>
#include <conio.h>
using namespace std;

void play();
void instructions();
void Equation();
int typetest(int);

int main(){

	srand(time(0));
   	char option;
	
	do{
		system("cls");
		cout<<"-----------------------------------"<<endl;
		cout<<"           MATHS GAME			  "<<endl;
		cout<<"-----------------------------------"<<endl<<endl;
		cout<<"1. Play"<<endl;
		cout<<"2. Instructions"<<endl;
		cout<<"3. Exit"<<endl<<endl;
		cout<<"Choose Option (1-3):";
		cin>>option;
		cin.ignore();
	
		switch(option){
			case '1':
				play();
				break;
			case '2':
				instructions();
				break;
		}
	}while(option != '3');
    return 0;
}

void play(){
	system("cls");
    char mode;
    do{
        cout<<"-----------------------------------"<<endl;
        cout<<"             GAME MODES            "<<endl;
        cout<<"-----------------------------------"<<endl<<endl;
        cout<<"1. Equation Games"<<endl;
        cout<<"2. 24 Game"<<endl;
        cout<<"3. Exit"<<endl<<endl;
        cout<<"Choose Modes (1-3):";
        cin>>mode;
		cin.ignore();

        switch(mode){
			case '1':
				Equation();
				break;
			case '2':
				
				break;
		}
    }while(mode != '3');
}

void Equation(){

	float q1, q2, ans, correctAns=0,ttscore=0,ttres=0;
    int level=1, limit;
    char operation;
    
	int elapTicks;
    double elapMilli, elapSeconds, elapMinutes;
	clock_t Begin, End;
	Begin = clock() * CLK_TCK;
	
		
    for(int i=0; i<20 ;i++){

		system("cls");
		
        switch(level){
            case 1: limit = 9; break;
            case 2: limit = 99; break;
            case 3: limit = 999; break;
        }

        if(level<4){
            q1 = rand()%limit+1;
            q2 = rand()%limit+1;

            int tmpOp = rand()%3;
            switch(tmpOp){
                case 0: operation = '+'; break;
                case 1: operation = '-'; break;
                case 2: operation = '*'; break; 
            }
            cout<<"("<<(i+1)<<"). ";
            cout<<q1<<" "<<operation<<" "<<q2<<" = "; 
            cin>> ans;
			cin.ignore();

            switch(operation){
			    case '+': correctAns = q1 + q2; break;
				case '-': correctAns = q1 - q2; break;
				case '*': correctAns = q1 * q2; break; 
	 		}
            if( correctAns == ans ){
				level++;
				cout<<"correct."<<endl<<endl;
				cout << "Next one (Press Enter)";
				getch();

			}else{
                level--;
				cout<<"wrong"<<endl;
		 		cout<<q1<<" "<<operation<<" "<<q2<<" = "<<correctAns<<endl;
				cout << "Next one (Press Enter)";
				getch();
			 	
			} 
	
	    }
		int r1 = rand()%3;
		int r2 = rand()%3;
		int r3 = rand()%3;

		if(true){		
			typetest(ttres);
			ttscore += ttres; 
		}else if(r2==r3){
			//for some more mini game
		}

		

		cout << "\n!!NEXT ONE FAST!! (Press Enter)\n";
		getch();
    
    
    }
	
	system("cls");
	End = clock() * CLK_TCK;
	elapTicks = End - Begin;
    elapMilli = elapTicks / 1000;
    elapSeconds = elapMilli / 1000;
    elapMinutes = elapSeconds / 60;
	cout << "-----------------------------------\n";
	if (elapSeconds < 1)
        cout << "It took " << elapMilli << " milliseconds.";
    else if (elapSeconds == 1)
        cout << "It took  1 second.";
    else if (elapSeconds > 1 && elapSeconds < 60)
        cout << "It took  " << elapSeconds << " seconds.";
    else if (elapSeconds >= 60)
        cout << "It took  " << elapMinutes << " minutes.";

	


	cout << "\n-----------------------------------";

    cout<<"\n\nPress any key to continue..."<<endl;
	getch();
   
}

int typetest(int result){
	system("cls");
	int N = rand()%6+3;
	char t;
	char c[N];
    int r;

	cout << "--------!!!Mini Game Appear!!!--------\n";
	cout << "       Copy the alphabets given\n\n";

	string text;

	cout << "-->  ";

	for (int i=0; i<9; i++) c[i] = 0;          
        
    for (int i=0; i<N; i++)
    {    r = rand() % 26;
		  t = 'a' + r;
		  cout << t;
          c[i] = t;           
          
    }
	cout << endl;
	string ctext = c;
	cout << "\nEnter text: ";
	getline(cin,text);

	if(text == ctext){
		cout << "\ncorrect";
		return 1;
	}else{ 
		cout << "\nwrong";
		cout << "Correct Ans: " << ctext << endl;
		cout << "Your Ans: " << text << endl;

		return 0;
	}
}

void instructions(){
	system("cls");
	cout<<"-----------------------------------"<<endl;
	cout<<"          Instructions			  "<<endl;
	cout<<"-----------------------------------"<<endl<<endl;
	cout<<"1. This game contains 2 modes \"Equation\" and \"24 game\""<<endl;
	cout<<"2. Gaining rank by giving the correct answer in time"<<endl;
	cout<<"3. Your result will be reveal once you completed all 20 questions "<<endl;
	cout<<"4. Keep in mind that the difficulty will increase for every correct answer"<<endl;
	cout<<endl;
	
	cout<<"Press any key to continue..."<<endl;
	getch();
}
