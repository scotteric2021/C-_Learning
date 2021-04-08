#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    time_t rawtime;
  struct tm * timeinfo;

  time (&rawtime);
  timeinfo = localtime (&rawtime);
  cout << "Current local time and date: " << asctime(timeinfo);

  return 0;
    
}