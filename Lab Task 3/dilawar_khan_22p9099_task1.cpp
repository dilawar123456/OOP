#include <iostream>
#include <string>
using namespace std;
struct MovieData
{
    string title;
    string director;
    int year;
};

MovieData createMovieData();
void DisplayMovieData(MovieData m1);

int main ()
{
MovieData m1,m2;

m1=createMovieData();
m2=createMovieData();
DisplayMovieData(m1);
DisplayMovieData(m2);

return 0;
}
MovieData createMovieData()
{
    MovieData m1;
    cout<<"Enter the title of the movie : "<<endl;
    getline(cin,m1.title);
    cout<<"Enter the director of the movie : "<<endl;
    getline(cin,m1.director);
    cout<<"Enter the release year of the movie : "<<endl;
    cin>>m1.year;
    cin.ignore();
   return m1;
}
void DisplayMovieData(MovieData m1)
{
    cout<<" --------------------------------"<<endl;
cout<<"The movie name is "<<m1.title<<endl;
cout<<"The director of the movie is "<<m1.director<<endl;
cout<<"The release year of the movie is "<<m1.year<<endl;


}