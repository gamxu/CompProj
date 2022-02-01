#include <iostream>
#include <ctime>
#include <Windows.h>
#include <cmath>
#include <conio.h>
using namespace std;

void play();
void instructions();
void Equation();

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

    float q1, q2, ans, correctAns;
    int level=1, limit;
    char operation;
    
	int elapTicks;
    double elapMilli, elapSeconds, elapMinutes;
	clock_t Begin, End;
	Begin = clock() * CLK_TCK;
	
	int qiznum[20]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};	
	int ttnum[5];	
	for(int i=0;i<5;i++){
		ttnum[i]=rand()%20;
	}

	int k=0;
	
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

            switch(operation){
			    case '+': correctAns = q1 + q2; break;
				case '-': correctAns = q1 - q2; break;
				case '*': correctAns = q1 * q2; break; 
	 		}
            if( correctAns == ans ){
				level++;
				cout<<"correct."<<endl<<endl;
			}
			else{
                level--;
				cout<<"wrong"<<endl;
		 		cout<<q1<<" "<<operation<<" "<<q2<<" = "<<correctAns<<endl;
			 	
			} 
	
	    }

		/*if(qiznum[i]==ttnum[k]){			//k declare above
			.....
			k++;
		}

		*/

		cout << "!!NEXT ONE FAST!! (Press Enter)\n";
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

	//function that will show you skill result

	cout << "\n-----------------------------------";

    cout<<"\n\nPress any key to continue..."<<endl;
	getch();
   
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