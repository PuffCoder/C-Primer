#include <iostream>
using namespace std;

typedef struct _Request {
  uint32_t timestamp;
  uint32_t uid;
  union {
    int reset;
  } payload;
} Request;



int main()
{
  Request  request;
  // request.timestamp = 3;
  request.payload.reset = 3;
  cout << request.payload.reset;


}
