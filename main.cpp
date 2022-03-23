#include <iostream>
#include <cmath>

int main(){
   using namespace std;
   system("clear");
   srand(time(NULL));


   string option[3] = {"rock", "paper", "scissor"};
   string multi = "";
   int p1, p2, comp;
   string choice = "";
   cout << "Are you playing against a friend? yes or no: "; cin >> multi;
   if(multi == "no"){
      system("clear");
      cout << "Please enter your choice (rock, paper, or scissor): "; cin >> choice;
      comp = rand() % 3;
      if(choice != "paper" && choice != "scissor" && choice != "rock" && choice != "scissors"){
         cout << "You have entered an invalid choice.\n";
      }
      else{
      if(choice == option[comp])
         cout << "It's a tie! \n" <<  "Computer: " << option[comp] << "\n";
      else if(choice == "rock")
         cout << (comp == 1 ? "The computer wins!\nComputer: " + option[comp] + "\n" : "You win!\n Computer: " + option[comp] + "\n");
      else if(choice == "paper")
         cout << (comp == 2 ? "The computer wins!\nComputer: " + option[comp] + "\n": "You win!\nComputer: " + option[comp] + "\n");
      else
         cout << (comp == 0 ? "The computer wins!\nComputer: " + option[comp] + "\n":"You win!\nComputer: " + option[comp] + "\n");
   }
   }
   else if(multi == "yes"){
      string choice2 = "";
      system("clear");
      cout << "Player 1 - please enter your choice (rock, paper, or scissor): "; cin >> choice;
      system("clear");
      cout << "Player 2 - Please enter your choice (rock, paper, or scissor): "; cin >> choice2;

      if(choice != "paper" && choice != "scissor" && choice != "rock" && choice != "scissors")
         cout << "You have entered an invalid choice." << endl;
      else{
      if(choice == choice2)
         cout << "It's a tie!\n";
      else if(choice == "rock")
         cout << (choice2 == "paper" ? "Player 2 WINS\n" : "Player 1 WINS\n ");
      else if(choice == "paper")
         cout << (choice2 == "rock" ? "Player 1 WINS!\n" : "Player 2 WINS!\n");
      else 
         cout << (choice2 == "rock" ? "Player 2 WINS\n" : "Player 1 WINS\n");
      }
   }
   else{
      cout << "You have entered an invalid input.\n"; 

}
}