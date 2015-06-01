#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

/*
Feedback: Mir ist dieses Trick Unsinn, aber ich verstehe total vector und 
std Funktionen. Ich kann einfach das Trick gar nicht verstehen.
*/

//For Testing purposes
template <typename T>
void print_vector(vector<T> v)
{
    int s = v.size();
    for (int j=0; j < s-1; j++)
    {
        cout << v.at(j) << ", \n";
    }
    cout << v.at(s-1) << endl;
    cout << "\n";
}

/*
Trick funktioniert noch nicht. Ich habe keine Ahnung warum. Ich glaube ich habe
die Anleitung gefolgt.
*/
int main()
{

    vector<string> suits = {"Kreuz","Pik","Herz","Karo"};
    vector<string> ranks = {"7","8","9","10","Bube","Dame","Koenig","Ass"};
    vector<string> kartenspiel;
       
    cout << "Making the deck... ";
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            kartenspiel.push_back(suits[j]+" "+ranks[i]);
        }
    }
    kartenspiel.shrink_to_fit();
    /*
    cout << "Full deck initial: \n"; 
    print_vector(kartenspiel);
    */
    
    //Shuffle the deck.
    cout << "Shuffling...\n";
    random_shuffle(kartenspiel.begin(),kartenspiel.end());
    kartenspiel.shrink_to_fit();
    
    /*
    cout << "Full deck shuffled: \n"; 
    print_vector(kartenspiel);
    */
    
    //Get Iterators to swap Aces
    vector<string>::iterator kreuz_ass = 
                find(kartenspiel.begin(),kartenspiel.end(), "Kreuz Ass");
                
    vector<string>::iterator pik_ass = 
                find(kartenspiel.begin(),kartenspiel.end(), "Pik Ass");
                
    vector<string>::iterator herz_ass = 
                find(kartenspiel.begin(),kartenspiel.end(), "Herz Ass");
                
    vector<string>::iterator karo_ass = 
                find(kartenspiel.begin(),kartenspiel.end(), "Karo Ass");
     
    //Swap the Aces such that they are on top of the deck.
    swap(*kreuz_ass, kartenspiel[0]);
    swap(*pik_ass, kartenspiel[1]);
    swap(*herz_ass, kartenspiel[2]);
    swap(*karo_ass, kartenspiel[3]);
    kartenspiel.shrink_to_fit();
    /*
    cout << "Full deck swapped: \n"; 
    print_vector(kartenspiel);
    */
    
    //Read in 3 integers from user. Must be [5,9]
    int d1 =0,d2=0,d3=0;
    while (d1 < 5 || d1 > 9 || d2 < 5 || d2 > 9 ||d3 < 5 || d3 > 9)
    {
        cout << "Bitte geben Sie 3 Zahlen zwischen 5 und 9 ein:" << endl;
        cin >> d1;
        cin >> d2;
        cin >> d3;
    }
    //Make 4 decks:
    vector<string> v1(32-(d1+d2+d3));
    vector<string> v2(d3);
    vector<string> v3(d2);
    vector<string> v4(d1); //This one will have the aces

    //deck 1 gets made first
    copy(kartenspiel.begin()+d3+d2+d1, kartenspiel.end(),v1.begin());
    copy(kartenspiel.begin()+d2+d1, kartenspiel.begin()+d3+d2+d1, v2.begin());
    copy(kartenspiel.begin()+d1, kartenspiel.begin()+d2+d1, v3.begin());
    copy(kartenspiel.begin(), kartenspiel.begin()+d1, v4.begin());
    
    /*
    cout << "Piece 1: \n";
    print_vector(v1);
    cout << "Piece 2: \n";
    print_vector(v2);
    cout << "Piece 3: \n";
    print_vector(v3);
    cout << "Piece 4: \n";
    print_vector(v4);
    */
    
    //Rotate the first 3 cards of each deck to the end
    rotate(v1.begin(), v1.begin()+3, v1.end());
    rotate(v2.begin(), v2.begin()+3, v2.end());
    rotate(v3.begin(), v3.begin()+3, v3.end());
    rotate(v4.begin(), v4.begin()+3, v4.end());
    
    //For each deck, put a card from the top on top of each of the other decks.
    
    //3 cards from v1
    v2.insert(v2.begin(),v1.begin(),v1.begin()+1);
    v1.erase(v1.begin());
    v3.insert(v3.begin(),v1.begin(),v1.begin()+1);
    v1.erase(v1.begin());
    v4.insert(v4.begin(),v1.begin(),v1.begin()+1);
    v1.erase(v1.begin());
    /*
    cout << "After First Insert:\n";
    cout << "Piece 1: \n";
    print_vector(v1);
    cout << "Piece 2: \n";
    print_vector(v2);
    cout << "Piece 3: \n";
    print_vector(v3);
    cout << "Piece 4: \n";
    print_vector(v4);
    */
    
    //3 cards from v2
    v1.insert(v1.begin(),v2.begin(),v2.begin()+1);
    v2.erase(v2.begin());
    v3.insert(v3.begin(),v2.begin(),v2.begin()+1);
    v2.erase(v2.begin());
    v4.insert(v4.begin(),v2.begin(),v2.begin()+1);
    v2.erase(v2.begin());
    /*
    cout << "After Second Insert:\n";
    cout << "Piece 1: \n";
    print_vector(v1);
    cout << "Piece 2: \n";
    print_vector(v2);
    cout << "Piece 3: \n";
    print_vector(v3);
    cout << "Piece 4: \n";
    print_vector(v4);
    */
    
    //3 cards from v3
    v1.insert(v1.begin(),v3.begin(),v3.begin()+1);
    v3.erase(v3.begin());
    v2.insert(v2.begin(),v3.begin(),v3.begin()+1);
    v3.erase(v3.begin());
    v4.insert(v4.begin(),v3.begin(),v3.begin()+1);
    v3.erase(v3.begin());
    /*
    cout << "After Third Insert:\n";
    cout << "Piece 1: \n";
    print_vector(v1);
    cout << "Piece 2: \n";
    print_vector(v2);
    cout << "Piece 3: \n";
    print_vector(v3);
    cout << "Piece 4: \n";
    print_vector(v4);
    */
    
    //And 3 cards from v4 (one with Aces)
    v1.insert(v1.begin(),v4.begin(),v4.begin()+1);
    v4.erase(v4.begin());
    v2.insert(v2.begin(),v4.begin(),v4.begin()+1);
    v4.erase(v4.begin());
    v3.insert(v3.begin(),v4.begin(),v4.begin()+1);
    v4.erase(v4.begin());
    /*
    cout << "After Final Insert:\n";
    cout << "Piece 1: \n";
    print_vector(v1);
    cout << "Piece 2: \n";
    print_vector(v2);
    cout << "Piece 3: \n";
    print_vector(v3);
    cout << "Piece 4: \n";
    print_vector(v4);
    */
    
    cout << "Stapel 1: " << v1[0] << endl;
    cout << "Stapel 2: " << v2[0] << endl;
    cout << "Stapel 3: " << v3[0] << endl;
    cout << "Stapel 4: " << v4[0] << endl;
    
    return 0;
}
