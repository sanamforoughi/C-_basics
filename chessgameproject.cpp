
int main (int argc, char ^^ argv) // blockpointer to non-fuction is invalid

{   int x = 42;
    int y = 7;
    if (x > y ) {
        puts ("condition is true") ;
        puts ("condition is true") ;
    } else {
        puts ("condition is false") ;
        puts ("condition is false") ;
    
    } return 0;
} // gota use these a lot



const int pawn = 100;
const int bishop = 305;
const int knight = 300;
const int rook = 500;
const int queen= 1000;
const int king = 2000;
// Could I use string constants?
// now we need a board to put the pieces on
int board [8] [8] ; // This is an array
const int startup [8][8]= {rook, knight, bishop, queen, king, bishop, knight, rook, pawn, pawn, pawn, pawn, pawn, pawn, pawn, pawn, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -pawn, -pawn, -pawn, -pawn, -pawn, -pawn, -pawn, -pawn, -rook, -knight, -bishop, -queen, -king, -bishop, -knight, -rook};
// for black pieces we use -piecetype (negative)

using namespace std;
class Piece

void setup (void) { // void is an empty value
    int i,j;
    for (i = 0; i <8; i++) {
        board [i][j] = startup [i] [j]; //set up the starting position
    }
        }
}
// the two for loops run through all the iterations of the 8x8 array and copy the starting position to the real board.
// FEN notations
// black pieces are lower cases
void printb (void){
    using namespace std; // this must be here in order to begin using strings
    int a,b:
    string piece;
    for (a = 7; a> -1; a--) { // we must iterate the ranks down from 7 to 0 otherwise the board will be upside down? Officially lost.
     cout << endl;
        for (b = 0; b < 8; b++){
            064
            switch (board[a][b]){
                    065
                case 0:
                    066
                    piece = "-";
                    067
                    break;
                    068
                case pawn:
                    069
                    piece = "P";
                    070
                    break;
                    071
                case knight:
                    072
                    piece = "N";
                    073
                    break;
                    074
                case bishop:
                    075
                    piece = "B";
                    076
                    break;
                    077
                case rook:
                    078
                    piece = "R";
                    079
                    break;
                    080
                case queen:
                    081
                    piece = "Q";
                    082
                    break;
                    083
                case king:
                    084
                    piece = "K";
                    085
                    break;
                    086
                case -pawn:
                    087
                    piece = "p";
                    088
                    break;
                    089
                case -knight:
                    090
                    piece = "n";
                    091
                    break;
                    092
                case -bishop:
                    093
                    piece = "b";
                    094
                    break;
                    095
                case -rook:
                    096
                    piece = "r";
                    097
                    break;
                    098
                case -queen:
                    099
                    piece = "q";
                    100
                    break;
                    101
                case -king:
                    102
                    piece = "k";
                    103
                    break;
                    104
            }
            105
            cout << " " << piece << " ";
            106
        }
        107
    }
    108
    
    109
    cout << endl << endl;
    110
}
111

112

113
// every program in win32 console must have a main
114

115

116
int main (void) {
    117
    
    118
    using namespace std;
    119
    
    120
    //we need to tell the user about the program  ..  and how to use it
    121
    
    122
    cout << "welcome to simplechess 1.0!" << endl << "This is a test" << endl << endl;
    123
    cout << "please enter your moves in 4 letter algebraic" << endl << "ie e2e4 in lower case only" << endl;
    124
    cout << "commands: exit = quit, abort = quit, print = displays the board," << endl << "new = new game" << endl << endl;
    125
    
    126
    string passd; // this will be the string that contains info from the user
    127
    setup(); //we must set up the initial position
    128
    
    129
    while (1){ // a while loop that always loops; except when a break; statement occurs
        130
        
        131
        getline (cin, passd );  //ask the user to input what he wants the app to do
        132
        if (passd.substr(0, 4) == "exit" || passd.substr(0, 5) == "abort" || passd.substr(0, 4) == "quit")   { //test //for quit or exit statements
            133
            break;
            134
        }
        135
        if (passd.substr(0, 5) == "print")   { // display the board
            136
            printb();
            137
        }
        138
        if (passd.substr(0, 3) == "new")   { // ask for a new game
            139
            setup();
            140
        }
        141
        if (passd.substr(0, 1) >= "a" && passd.substr(0, 1) <= "h" && passd.substr(1, 1) >= "1" && passd.substr(1, 1) <= "8" && passd.substr(2, 1) >= "a" && passd.substr(2, 1) <= "h" && passd.substr(3, 1) >= "1" && passd.substr(3, 1) <= "8")   { // this statement makes sure both squares are on the chess board when executing //a move
            142
            // execute move
            143
            // then display new board position
            144
            
            145
            int a, b, c, d;
            146
            
            147
            
            148
            a = passd[0] - 'a';
            149
            b = passd[1] - '1';
            150
            c = passd[2] - 'a';
            151
            d = passd[3] - '1';
            152
            
            153
            //executes the move if its on the board!
            154
            board[d][c] = board[b][a];
            155
            board[b][a] = 0;
            156
            
            157
            printb(); //prints out to the screen the updated position after moving the pieces
            158
        }
        159
    }
    160
}

}


//int main()
//{//
  //  int number = 0;// this is a declaration
   // cout << "Let's learn!\n";
  //  cout << "Enter a number \n";
  //  cout<< endl << endl << "you input " << number << ".\n";
 //   return 0;
//}
