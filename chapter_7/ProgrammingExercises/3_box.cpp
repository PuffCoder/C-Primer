// a.Write a function that passes a box structure by value and that displays the value of each member.
// b. Write a function that passes the address of a box structure and that sets the volume member to the product of the other three dimensions.
// c. Write a simple program that uses these two function
// Date : 19 April 2023

#include <iostream>
using namespace std;

struct box
{
  char maker[40];
  float height;
  float width;
  float length;
  float volume;
};

void boxInfo(box a);
void volumeInfo(box* a); // b. 

int main() 
{
  box BB = {"Master Wang", 1.1, 2.2, 3.3};
  BB.volume =  111;
  boxInfo(BB);
  // box * ptr = NULL;
  // ptr = &BB;
  volumeInfo(&BB);
  boxInfo(BB);


}
void volumeInfo(box* a)
{
  a->volume = a->height * a->width * a->length;

}


void boxInfo(box a)
{
  cout << "present the box infor " << endl;
  cout << "Box maker: " << a.maker << endl;
  cout << "Box detail: H, W, L: "<< endl;
  cout << a.height << " " << a.width << " " << a.length << endl;
  // a.volume = a.height * a.width * a.length;
  // a.volume =  111;
  cout << "Volume: " << a.volume << endl;
}

