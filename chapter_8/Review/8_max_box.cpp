// Date : 13 July 2023
// Given the template of Chapter Review Question 7 and the box structure of Chapter Review Question 4,
// provide a template specialization that takes two box arguments and returns the one with the larger volume

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

void show_box(const box & box_a)
{
  cout << "Maker : " << box_a.maker << endl;
  cout << "height : " << box_a.height << endl;
  cout << "width : " << box_a.width << endl;
  cout << "lenght : " << box_a.length << endl;
  cout << "volume : " << box_a.volume << endl;
}

void set_volume(box & box_b)
{
  box_b.volume = box_b.height * box_b.width * box_b.length;
}

template<typename T>
T tmax(T t1, T t2)
{
  return t1>t2?t1:t2;
}

template <> box tmax (box b1, box b2)
{
  return b1.volume > b2.volume?b1:b2;
}

int main()
{
  box b1 = {"KFC",12, 1.2,2.3};
  box b2 = {"MC",21, 9.2,3.3};
  /* show_box(b1); */
  /* cout << endl; */
  /* show_box(b2); */
  
  set_volume(b1);
  set_volume(b2);


  /* show_box(b1); */
  /* cout << endl; */
  /* show_box(b2); */

  box c = tmax(b1, b2);
  show_box(c);

}


