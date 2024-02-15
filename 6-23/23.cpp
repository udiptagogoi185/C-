#include <iostream>
using namespace std;

class movie{
    private:
        string rating;
    public:
        string name;
        string director; 
    movie(string aName, string aDirector, string aRating) {
            name = aName;
            director = aDirector;
            setRating(aRating);
    }
        void setRating(string aRating){
            if(aRating == "G" || aRating == "PG" || aRating == "PG-13" || aRating == "R" || aRating == "NR") {
                rating = aRating;
            }else {
                rating = "NR";
            }
        }
        string getRating(){
            return rating;
        }
        
    };
int main ()                                                         
{
    movie m1("Avengers", "Anthony Russo", "PG-13");
    movie m2("Batman", "Warner Bros", "R");
    movie m3("Adipurush", "Om Raut", "G");

    m1.setRating("Dog");
        cout << m1.getRating() << endl;
    
    m2.setRating("PG");
        cout << m2.getRating() << endl;

    m3.setRating("R");
        cout << m3.getRating();

    return 0;
}