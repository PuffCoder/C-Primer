// 2. Write a program that asks the user to enter up to 10 golf scores, which are to be stored in an scoresay.Y ou should provide a means for the user to terminate input prior to entering 10 scores.The program should display all the scores on one line and report the average score. Handle input, display, and the average calculation with three separate array-processing functions.
// Date : 18 April 2023

#include <iostream>
#include <iomanip>
using namespace std;

const int MAX_GOLF_SCORES = 10;
// double* enterGolf(double* scores, int Size);
int enterGolf(int scores[]);
double meanVal(int scores[], int numScores);
void display(int scores[],int numScores);
int main() 
{
  int scores[MAX_GOLF_SCORES];
  int numScores = enterGolf(scores);

  display(scores, numScores);
  double averageScore = meanVal(scores, numScores);
  cout << "the mean value is " << fixed << setprecision(2) << averageScore << endl;


}
int enterGolf( int scores[])
{
  int numScores = 0;
  cout << "Enter up to 10 golf scores  " << endl;

  while (numScores < MAX_GOLF_SCORES)
  {
    int score;
    cin >> score;

    if (score == -1) {
        break;
    }

    scores[numScores] = score;
    numScores++;
  }
  return numScores;

}

double meanVal(int scores[], int numScores)
{
  double mean = 0;
  for(int i = 0; i< numScores;i++)
    mean += scores[i];
  return mean/numScores;
}


void display(int scores[],int numScores)
{
  cout << "Display Scores: " << endl;
  for(int i = 0; i< numScores; i++)
    {
      cout << scores[i] << " ";
    }
  cout << endl;
}



